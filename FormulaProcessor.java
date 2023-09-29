import java.util.*;
import java.util.regex.*;

class PriceFormula {
  String variable;
  String formula;
  String source;
  String description;

  public PriceFormula(String variable, String formula, String source, String description) {
    this.variable = variable;
    this.formula = formula;
    this.source = source;
    this.description = description;
  }
}

public class FormulaProcessor {
  public static Map<String, String> atomizeFormulas(List<PriceFormula> priceFormulas) {
    Map<String, String> atomizedFormulas = new HashMap<>();
    Map<String, PriceFormula> formulaMap = new HashMap<>();

    for (PriceFormula pf : priceFormulas) {
      if (pf.formula == null) {
        atomizedFormulas.put(pf.variable, pf.source);
      }
      else {
        formulaMap.put(pf.variable, pf);
      }
    }
    formulaAtomizerProcessor(atomizedFormulas, formulaMap);
    return atomizedFormulas;
  }

  private static void formulaAtomizerProcessor(Map<String, String> atomizedFormula,
      Map<String, PriceFormula> formulaMap) {
    if (formulaMap.isEmpty()) {
      return;
    }
    Iterator<Map.Entry<String, PriceFormula>> iterator = formulaMap.entrySet().iterator();
    Map.Entry<String, PriceFormula> firstEntry = iterator.next();
    String variable = firstEntry.getKey();
    formulaSourceProcessor(variable, atomizedFormula, formulaMap);
    formulaMap.remove(variable);
    formulaAtomizerProcessor(atomizedFormula, formulaMap);
  }

  private static String formulaSourceProcessor(String variable, Map<String, String> atomizedFormula,
      Map<String, PriceFormula> formulaMap) {

    if (atomizedFormula.containsKey(variable)) {
      return atomizedFormula.get(variable);
    }

    String formula = formulaMap.get(variable).formula;
    Pattern variablePattern = Pattern.compile("\\b[a-zA-Z]\\w*\\b");
    Matcher variableMatcher = variablePattern.matcher(formula);
    StringBuilder result = new StringBuilder();
    result.append("(");

    while (variableMatcher.find()) {
      String subVariable = variableMatcher.group();
      String source =  formulaSourceProcessor(subVariable, atomizedFormula, formulaMap);
      variableMatcher.appendReplacement(result, source);
    }

    variableMatcher.appendTail(result);
    result.append(")");
    atomizedFormula.put(variable, result.toString());
    return result.toString();
  }

  public static void main(String[] args) {
    List<PriceFormula> priceFormulas = new ArrayList<>();
    priceFormulas.add(new PriceFormula("PAID_PRICE", "BASE_FARE+NTA-PSC*3", null, "Harga yang dibayarkan oleh customer"));
    priceFormulas.add(new PriceFormula("NTA", null, "nta", "nett to agent"));
    priceFormulas.add(new PriceFormula("BASE_FARE", null, "baseFare", "nett to agent"));
    priceFormulas.add(new PriceFormula("PSC", "FUEL+CHARGE*3", null, "nett to agent"));
    priceFormulas.add(new PriceFormula("FUEL", null, "fuel", "fuel price"));
    priceFormulas.add(new PriceFormula("CHARGE", null, "charge", "charge added"));

    Map<String, String> atomizedFormulas = atomizeFormulas(priceFormulas);
    for (Map.Entry<String, String> entry : atomizedFormulas.entrySet()) {
      System.out.println(entry.getKey() + " -> " + entry.getValue());
    }
  }

//  public static void main(String[] args) {
//    String formula = "BASE_FARE + PSC";
////    String formula = "3 * BASE_FARE + nta +baseFare / (2 * z)";
//
//  }
}
