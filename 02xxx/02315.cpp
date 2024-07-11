#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> d(1001, 0), w(1001, 0);
  for (int i=1; i<=n; i++) cin >> d[i] >> w[i];
  for (int i=1; i<=n; i++) w[i] += w[i-1];

  vector<vector<long long>> dp1(1001, vector<long long>(1001, 0)), dp2(1001, vector<long long>(1001, 0));
  for (int l=2; l<=m; l++) {
    dp1[l][n] = dp1[l-1][n] + w[l-1] * (d[l]-d[l-1]);
    dp2[l][n] = dp1[l-1][n] + w[l-1] * (d[n]-d[l-1]);
  }
  for (int r=n-1; r>=m; r--) {
    dp1[1][r] = dp2[1][r+1] + (w[n]-w[r]) * (d[r+1]-d[1]);
    dp2[1][r] = dp2[1][r+1] + (w[n]-w[r]) * (d[r+1]-d[r]);
  }
  for (int l=2; l<=m; l++) {
    for (int r=n-1; r>=m; r--) {
      dp1[l][r] = min(dp1[l-1][r] + (w[n]-w[r]+w[l-1]) * (d[l]-d[l-1]), dp2[l][r+1] + (w[n]-w[r]+w[l-1]) * (d[r+1]-d[l]));
      dp2[l][r] = min(dp1[l-1][r] + (w[n]-w[r]+w[l-1]) * (d[r]-d[l-1]), dp2[l][r+1] + (w[n]-w[r]+w[l-1]) * (d[r+1]-d[r]));
    }
  }
  cout << min(dp1[m][m], dp2[m][m]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}