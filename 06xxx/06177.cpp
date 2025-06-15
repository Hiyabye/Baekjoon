#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x.begin(), x.end());

  double mean = 0.0;
  for (int i=0; i<n; i++) {
    mean += x[i];
  }
  mean /= n;

  double median;
  if (n & 1) {
    median = x[(n-1)/2];
  } else {
    median = (x[n/2-1] + x[n/2]) / 2;
  }
  cout << fixed << setprecision(4) << mean << "\n" << median;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}