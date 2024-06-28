#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, a, b;
  cin >> n;
  cin >> m;

  vector<vector<bool> > v(n+1, vector<bool>(n+1, false));
  for (int i=0; i<m; i++) {
    cin >> a >> b;
    v[a][b] = true;
    v[b][a] = true;
  }

  vector<bool> ans(n+1, false);
  for (int i=2; i<=n; i++) {
    if (!v[1][i]) continue;
    ans[i] = true;
    for (int j=2; j<=n; j++) {
      if (!v[i][j]) continue;
      ans[j] = true;
    }
  }

  int cnt = 0;
  for (int i=1; i<=n; i++) {
    if (ans[i]) cnt++;
  }
  cout << cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}