import java.util.*;

public class ZeroSumSubarray {

  public static void main(String[] args) {
    List<Integer> inputList = Arrays.asList(3, 2, -5, -6, -1, 4);

    var result = maximizeTransaction(inputList);
    System.out.println(result);
  }

//    public static int maximizeTransaction(List<Integer> transaction) {
//      List<Integer> currentResult = new ArrayList<>();
//      List<Integer> maxResult = new ArrayList<>();
//
//      backtrack(transaction, 0, 0, currentResult, maxResult);
//
//      return maxResult.size();
//    }
//
//    private static void backtrack(List<Integer> inputList, int index, int currentSum, List<Integer> currentResult, List<Integer> maxResult) {
//      if (currentSum >= 0 && currentResult.size() > maxResult.size()) {
//        maxResult.clear();
//        maxResult.addAll(currentResult);
//      }
//
//      if (index >= inputList.size() || currentSum < 0) {
//        return;
//      }
//
//      currentResult.add(inputList.get(index));
//
//      backtrack(inputList, index + 1, currentSum + inputList.get(index), currentResult, maxResult);
//      currentResult.remove(currentResult.size() - 1);
//
//      backtrack(inputList, index + 1, currentSum, currentResult, maxResult);
//    }

  public static List<Integer> maximizeTransaction(List<Integer> transaction) {
    int n = transaction.size();

    // DP table to store if a given sum can be achieved
    boolean[][] dp = new boolean[n + 1][10000000];
    dp[0][0] = true;

    for (int i = 1; i <= n; i++) {
      int currentElement = transaction.get(i - 1);
      for (int j = 0; j <= n * 1000; j++) {
        // Either we exclude the current element
        dp[i][j] = dp[i - 1][j];

        // Or we include the current element if it does not lead to a negative sum
        if (j >= currentElement && dp[i - 1][j - currentElement]) {
          dp[i][j] = true;
        }
      }
    }

    // Find the maximum non-negative sum
    int maxSum = 0;
    for (int j = 0; j <= n * 1000; j++) {
      if (dp[n][j]) {
        maxSum = j;
      }
    }

    // Extract the elements that form the maximum sum
    List<Integer> result = new ArrayList<>();
    int i = n;
    int currentSum = maxSum;
    while (i > 0 && currentSum > 0) {
      if (currentSum - transaction.get(i - 1) >= 0 && dp[i - 1][currentSum - transaction.get(i - 1)]) {
        result.add(transaction.get(i - 1));
        currentSum -= transaction.get(i - 1);
      }
      i--;
    }

    return result;
  }
}
