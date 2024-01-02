#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  string a, b, ans;
  cin >> a;
  cin >> b;

  vector<vector<int> > dp(a.size()+1, vector<int>(b.size()+1, 0));
  for (int i=0; i<a.size(); i++) {
    for (int j=0; j<b.size(); j++) {
      if (a[i] == b[j]) dp[i+1][j+1] = dp[i][j] + 1;
      else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
    }
  }

  if (dp[a.size()][b.size()] == 0) {
    cout << "0\n";
    return;
  }

  for (int i=a.size(), j=b.size(); i>0 && j>0;) {
    if      (dp[i][j] == dp[i-1][j]) i--;
    else if (dp[i][j] == dp[i][j-1]) j--;
    else {
      ans.push_back(a[i-1]);
      i--; j--;
    }
  }
  reverse(ans.begin(), ans.end());
  cout << dp[a.size()][b.size()] << "\n" << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}