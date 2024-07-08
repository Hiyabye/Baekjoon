#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<bool>> v(r, vector<bool>(c));
  for (int i=0; i<r; i++) {
    string s; cin >> s;
    for (int j=0; j<c; j++) v[i][j] = s[j] == '1';
  }

  vector<vector<int>> dp1(r, vector<int>(c, 0)), dp2(r, vector<int>(c, 0));
  for (int i=r-1; i>=0; i--) {
    for (int j=c-1; j>=0; j--) {
      if (!v[i][j]) continue;
      dp1[i][j]++; dp2[i][j]++;
      if (i > 0 && j < c-1 && v[i-1][j+1]) dp1[i-1][j+1] += dp1[i][j];
      if (i > 0 && j > 0 && v[i-1][j-1]) dp2[i-1][j-1] += dp2[i][j];
    }
  }

  int ans = 0;
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      if (!v[i][j]) continue;
      int m = min(dp1[i][j], dp2[i][j]);
      for (int k=ans+1; k<=m; k++) {
        if (dp1[i+k-1][j+k-1] < k || dp2[i+k-1][j-k+1] < k) continue;
        ans = max(ans, k);
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}