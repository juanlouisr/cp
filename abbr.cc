#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int fareCalc(string time, int dist, int minDist, int basicFare, int minimumMeter, int additionalRate) {
  float totalFare = basicFare;
  int hour = stoi(time.substr(0, 2));
  int dist2 = dist - minDist;
  if (dist2 > 0) {
    totalFare += ceil((float) dist2 / minimumMeter) * additionalRate;
  }
  if (!(hour < 22)) {
    totalFare *= 1.2;
  }
  return totalFare;
}

int main(int argc, char *argv[]) {
  int A,B,C,D,n;
  cin >> A >> B >> C >> D >> n;
  int totalSales = 0; 
  while (n--) {
    string time;
    int length;
    cin >> time >> length;
    totalSales += fareCalc(time, length, A, B, C, D);
  }
  cout << totalSales;
}


