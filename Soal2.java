import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.StringJoiner;

public class Soal2 {

  public static String virusSpread(String peopleCond, int hours) {
    int virus = 0;
    for (int i = 0; i < peopleCond.length(); i++) {
      virus += peopleCond.charAt(i) == '*' ? 1 : 0;
    }
    if (virus == 0 || hours == 0) {
      return peopleCond;
    }
    StringBuilder builder = new StringBuilder(peopleCond);

    int[] infectedMap = new int[peopleCond.length()];

    for (int i = 0; i < peopleCond.length(); i++) {
      char current = peopleCond.charAt(i);
      if (current == '*') {
        if (i > 0 && infectedMap[i] == 0) {
          builder.setCharAt(i-1, ascend(peopleCond.charAt(i-1)));
          infectedMap[i-1] = 1;
        }
        if (i < peopleCond.length() - 1 && infectedMap[i] == 0) {
          builder.setCharAt(i+1, ascend(peopleCond.charAt(i+1)));
          infectedMap[i+1] = 1;
        }
        builder.setCharAt(i, ascend(current));
      }
    }
    return virusSpread(builder.toString(), hours - 1);
  }


  public static char ascend(char c) {
    if (c == '*') return '#';
    if (c == 'o') return '*';
    return c;
  }

  public static String findMinimumDifference(List<Integer> packets, int participants) {
    Collections.sort(packets);
    int totalPackets = packets.size();

    int minDifference = Integer.MAX_VALUE;
    int left = 0;
    int right = participants - 1;
    int minElementIndex = 0;
    int maxElementIndex = 0;

    // Find the minimum difference using sliding window technique
    while (right < totalPackets) {
      int difference = packets.get(right) - packets.get(left);
      if (difference < minDifference) {
        minDifference = difference;
        minElementIndex = left;
        maxElementIndex = right;
      }
      left++;
      right++;
    }

    List<Integer> minElements = packets.subList(minElementIndex, maxElementIndex + 1);

    return minDifference + ", " + minElements;
  }


  public static void main(String[] args) {
//    System.out.println(virusSpread("oo*oo", 2));
    System.out.println(findMinimumDifference(Arrays.asList(2, 20, 13, 31, 10, 12, 17, 16, 27), 3));

  }
}
