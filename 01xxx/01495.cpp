#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, s, m;
  cin >> n >> s >> m;
  vector<int> v(n+1);
  for (int i=1; i<=n; i++) cin >> v[i];

  vector<vector<bool> > dp(n+1, vector<bool>(m+1, false));
  if (s+v[1] <= m) dp[1][s+v[1]] = true;
  if (s-v[1] >= 0) dp[1][s-v[1]] = true;

  for (int i=2; i<=n; i++) {
    for (int j=0; j<=m; j++) {
      if (dp[i-1][j] && j+v[i] <= m) dp[i][j+v[i]] = true;
      if (dp[i-1][j] && j-v[i] >= 0) dp[i][j-v[i]] = true;
    }
  }

  for (int i=m; i>=0; i--) {
    if (dp[n][i]) {
      cout << i;
      return;
    }
  }
  cout << "-1";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}