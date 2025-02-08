#include <iostream>
#include <vector>
using namespace std;

inline bool check(int m, const vector<int> &a, const vector<int> &b) {
  for (int i=0; i<m; i++) {
    if (b[i] == -1) continue;
    if (a[i] != b[i]) return false;
  }
  return true;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  int q; cin >> q;
  while (q--) {
    vector<int> b(m); int ans = 0;
    for (int i=0; i<m; i++) cin >> b[i];
    for (int i=0; i<n; i++) ans += check(m, a[i], b);
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}