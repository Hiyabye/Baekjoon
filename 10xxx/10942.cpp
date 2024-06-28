#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, x, y;
  cin >> n;
  vector<int> a(n+1);
  for (int i=1; i<=n; i++) {
    cin >> a[i];
  }

  vector<vector<bool> > dp(n+1, vector<bool>(n+1, false));
  for (int i=1; i<=n; i++) {
    dp[i][i] = true;
  }
  for (int i=1; i<=n-1; i++) {
    if (a[i] != a[i+1]) continue;
    dp[i][i+1] = true;
  }
  for (int i=2; i<=n-1; i++) {
    for (int j=1; j<=n-i; j++) {
      if (a[j] != a[j+i]) continue;
      dp[j][j+i] = dp[j+1][j+i-1];
    }
  }

  cin >> m;
  for (int i=0; i<m; i++) {
    cin >> x >> y;
    cout << dp[x][y] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}