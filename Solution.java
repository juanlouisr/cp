import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

class Result {

  /*
   * Complete the 'langkahTercepat' function below.
   *
   * The function is expected to return an INTEGER.
   * The function accepts following parameters:
   *  1. 2D_INTEGER_ARRAY ladders
   *  2. 2D_INTEGER_ARRAY snakes
   */

  public static int minStep(int[] board, Map<Integer, Integer> memo, int pos) {

    // Base case if already in final position
    if (pos == 100) {
      return 0;
    }

    // Base case if other branch have saved the resulting min steps from this particular step
    if (memo.containsKey(pos)) {
      return memo.get(pos);
    }

    // Actual logic
    int minSteps = Integer.MAX_VALUE;
    // Branch possibilities from dice throws
    for (int diceThrow = 6; diceThrow >= 1; diceThrow--) {
      int nextPosition = pos + diceThrow;

      if (nextPosition < 100 + 1) {
        // Check if there are snakes or ladders
        int jumpTo = board[nextPosition] != -1 ? board[nextPosition] : nextPosition;
        minSteps = Math.min(minSteps, 1 + minStep(board, memo, jumpTo));
        memo.put(jumpTo, minSteps);

      }
    }

//    memo.put(pos, minSteps);
    return minSteps;
  }

  public static int langkahTercepat(List<List<Integer>> ladders, List<List<Integer>> snakes) {
    // Make board representation
    int[] board = new int[100 + 1];

    Arrays.fill(board, -1);

    // Make ladders representation inside the board

    for (List<Integer> snake : snakes) {
      board[snake.get(0)] = snake.get(1);
    }

    // Make snakes representation inside the board

    for (List<Integer> ladder : ladders) {
      board[ladder.get(0)] = ladder.get(1);
    }

    // Make memo for memoization procedure
    Map<Integer, Integer> memo = new HashMap<>();
    return minStep(board, memo, 1);
  }

}

public class Solution {

  public static void main(String[] args) throws IOException {
    Scanner scanner = new Scanner(System.in);

    List<List<Integer>> ladders = new ArrayList<>();
    List<List<Integer>> snakes = new ArrayList<>();

    int nLadder = scanner.nextInt();

    for (int i = 0; i < nLadder; i++) {
      ladders.add(Arrays.asList(scanner.nextInt(), scanner.nextInt()));
    }

    int nSnakes = scanner.nextInt();

    for (int i = 0; i < nSnakes; i++) {
      snakes.add(Arrays.asList(scanner.nextInt(), scanner.nextInt()));
    }

    System.out.println(Result.langkahTercepat(ladders, snakes));
  }
}