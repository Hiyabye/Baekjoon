#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int minus = count(v.begin(), v.end(), -1);
  double sum = accumulate(v.begin(), v.end(), 0) + minus;
  cout << fixed << setprecision(4) << sum / (n - minus);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}