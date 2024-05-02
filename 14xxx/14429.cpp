#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  pair<int, int> ans = {0, 1e9};
  for (int i=1; i<=n; i++) {
    int j, m; cin >> j >> m;
    int k = (j + m) / (m + 1) * 2;
    if (k < ans.second) ans = {i, k};
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}