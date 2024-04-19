#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int calc(int n, const vector<double> &x, const vector<double> &y) {
  double ret = 0;
  for (int i=0; i<n; i++) {
    ret += (x[i] * y[i+1] - y[i] * x[i+1]) / 2;
  }
  return abs(ret) + 0.5;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<double> x(n+1), y(n+1);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];
  x[n] = x[0]; y[n] = y[0];

  cout << calc(n, x, y) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}