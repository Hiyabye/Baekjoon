#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> p(n), q(m);
  for (int i=0; i<n; i++) cin >> p[i].first >> p[i].second;
  for (int i=0; i<m; i++) cin >> q[i].first >> q[i].second;

  long long ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    long long x = p[i].first - q[j].first;
    long long y = p[i].second - q[j].second;
    ans = max(ans, x * x + y * y);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}