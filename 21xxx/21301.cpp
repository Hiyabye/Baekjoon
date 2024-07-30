#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  vector<double> t(10);
  for (int i=0; i<10; i++) cin >> t[i];

  double avg = accumulate(t.begin(), t.end(), 0.0) / 10, std = 0;
  for (int i=0; i<10; i++) {
    std += (t[i] - avg) * (t[i] - avg);
  }
  return std <= 9;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "COMFY" : "NOT COMFY");
  return 0;
}