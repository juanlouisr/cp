import java.util.List;

public class Stample {

  public static int maxStample(int M, int N, List<String> paper) {
    int max = Integer.min(M, N);

    for (int i = max; i > 1; i--) {
      boolean[][] visited = new boolean[M][N]; // create the MxN visited matrix
      // set all elements to false (i.e. unvisited)
      for (int m = 0; m < M; m++) {
        for (int n = 0; n < N; n++) {
          if (paper.get(m).charAt(n) == '#' || paper.get(m).charAt(n) == '?') {
            visited[m][n] = true;
          }
          visited[m][n] = false;
        }
      }
      boolean possible = true;
      for (int j = 0; j < M-i+1; j++) {
        for (int k = 0; k < N-i+1; k++) {

          for (int stampX = 0; stampX < i; stampX++) {
            for (int stampY = 0; stampY < i; stampY++) {
              if (paper.get(M).charAt(N) == '_' || paper.get(M).charAt(N) == '?') {

              }
            }
          }
        }
      }


      boolean found = false;
      for (int m = 0; m < M && !found; m++) {
        for (int n = 0; n < N; n++) {
          if (!visited[m][n]) {
            found = true;
            break;
          }
        }
      }
      if (found) {
        return i;
      }
    }

    return 1;
  }

}
