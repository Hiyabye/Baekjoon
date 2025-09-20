#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<double, int>> ans(n);
  for (int i=0; i<n; i++) {
    double a, b; cin >> a >> b;
    ans[i] = {b / a, i + 1};
  }
  cout << min_element(ans.begin(), ans.end())->second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}