#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int mx = *max_element(v.begin(), v.end());
  int mn = *min_element(v.begin(), v.end());
  int sum = accumulate(v.begin(), v.end(), 0);

  return abs((mx + mn) / 2.0 - sum / (double)n) < 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}