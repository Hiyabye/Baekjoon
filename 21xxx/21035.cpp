#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  int q; cin >> q;
  while (q--) {
    string s; int k, v; cin >> s >> k >> v; k--;
    if (s == "row") {
      for (int i=0; i<m; i++) a[k][i] += v;
    } else {
      for (int i=0; i<n; i++) a[i][k] += v;
    }
  }

  int sum = 0, mn = 1e9, mx = -1e9;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    sum += a[i][j];
    mn = min(mn, a[i][j]);
    mx = max(mx, a[i][j]);
  }
  cout << sum << " " << mn << " " << mx;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}