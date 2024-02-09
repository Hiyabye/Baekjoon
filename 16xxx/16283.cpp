#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int a, b, n, w; cin >> a >> b >> n >> w;

  vector<pair<int, int>> ans;
  for (int i=1; i<n; i++) {
    if (a*i + b*(n-i) == w) {
      ans.push_back(make_pair(i, n-i));
    }
  }

  if (ans.size() == 1) cout << ans[0].first << " " << ans[0].second;
  else cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}