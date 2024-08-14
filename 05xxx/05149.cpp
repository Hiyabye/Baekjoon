#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  int a = 1e9, b = -1e9, c = 1e9, d = -1e9;
  while (m--) {
    int x; cin >> x; x--;
    a = min(a, v[x].first); b = max(b, v[x].first);
    c = min(c, v[x].second); d = max(d, v[x].second);
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a <= v[i].first && v[i].first <= b && c <= v[i].second && v[i].second <= d) ans++;
  }
  cout << "Data Set " << idx << ":\n" << ans << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}