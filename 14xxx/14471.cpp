#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> v(m);
  for (int i=0; i<m; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  int ans = 0;
  for (int i=1; i<m; i++) {
    if (v[i].first >= n) break;
    ans += n - v[i].first;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}