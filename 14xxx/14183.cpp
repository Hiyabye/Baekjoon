#include <iostream>
#include <vector>
using namespace std;

inline bool check(int m, const vector<int> &a, const vector<int> &b) {
  for (int i=0; i<m; i++) {
    if (a[i] < b[i]) return false;
  }
  return true;
}

bool solve(void) {
  int m, n; cin >> m >> n;
  if (m == 0 && n == 0) return false;

  vector<int> c(m);
  for (int i=0; i<m; i++) cin >> c[i];
  vector<vector<int>> t(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> t[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += check(m, c, t[i]);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}