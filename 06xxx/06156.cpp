#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<bool>> v(n, vector<bool>(n, false));
  while (m--) {
    int a, b; cin >> a >> b; a--; b--;
    v[a][b] = true;
  }

  for (int i=0; i<n; i++) v[i][i] = true;
  for (int k=0; k<n; k++) for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (v[i][j] || (v[i][k] && v[k][j])) v[i][j] = true;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    bool flag = true;
    for (int j=0; j<n; j++) {
      if (!v[i][j] && !v[j][i]) {
        flag = false;
        break;
      }
    }
    if (flag) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}