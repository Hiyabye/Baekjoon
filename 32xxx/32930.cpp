#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline int dist(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;
  for (int i=0; i<m; i++) cin >> b[i].first >> b[i].second;

  int ans = 0, x = 0, y = 0;
  for (int i=0; i<m; i++) {
    int mx = 0;
    for (int j=1; j<n; j++) {
      if (dist({x, y}, a[j]) > dist({x, y}, a[mx])) mx = j;
    }
    ans += dist({x, y}, a[mx]);
    x = a[mx].first, y = a[mx].second;
    a[mx] = b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}