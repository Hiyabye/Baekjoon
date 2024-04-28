#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  double mn = 1e9;
  pair<int, int> ans;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    double d = hypot(x[i] - x[j], y[i] - y[j]);
    if (d < mn) mn = d, ans = make_pair(i+1, j+1);
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}