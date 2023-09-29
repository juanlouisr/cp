import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class CariKata {

  public static List<String> cari(List<String> board, List<String> kataList) {
      List<String> ans = new ArrayList<>();

      for (String kata : kataList) {
        boolean found = false;
        for (int i = 0; i < board.size() && !found; i++) {
          for (int j = 0; j < board.get(i).length() && !found; j++) {
            if (kata.charAt(0) == board.get(i).charAt(j)) {
              String s = kata.substring(1);
              found = patternMatching(i, j, s, board, 0, 1)
                  | patternMatching(i, j, s, board, 1, 0)
                  | patternMatching(i, j, s, board, 1, 1);
            }
          }
        }
        if (found) {
          ans.add("YA");
        }
        else {
          ans.add("TIDAK");
        }
      }

      return ans;
    }

    public static String substring(String s, int idx) {
      if (s.length() <= idx) {
        return "";
      }
      return s.substring(idx);
    }

    public static boolean patternMatching(int x, int y, String kata, List<String> board, int moveX, int moveY) {
      if (kata.length() == 0) {
        return true;
      }
      else if (x >= board.size() || y >= board.get(x).length()) {
        return false;
      }
  //    else if (board.size() - x > kata.length() && moveX > 0) {
  //      return false;
  //    }
  //    //
  //    else if (board.get(x).length() - y > kata.length() && moveY > 0) {
  //      return false;
  //    }
      else if (kata.charAt(0) == board.get(x).charAt(y)) {
        return patternMatching(x + moveX, y + moveY, substring(kata, 1), board, moveX, moveY);
      }
      else {
        return patternMatching(x + moveX, y + moveY, kata, board, moveX, moveY);
      }
    }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int x = scanner.nextInt();
    int y = scanner.nextInt();

    List<String> board = new ArrayList<>();
    for (int i = 0; i < x; i++) {
      String b = scanner.next();
      board.add(b);
    }

    int n = scanner.nextInt();
    List<String> kata = new ArrayList<>();
    for (int i = 0; i < n; i++) {
      kata.add(scanner.next());
    }

    List<String> ans = cari(board, kata);
    for (String word : ans) {
      System.out.println(word);
    }

  }

}
