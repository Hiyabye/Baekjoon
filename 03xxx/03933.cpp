#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > dp(1<<15, vector<int>(5, 0));

void precompute(void) {
  for (int i=1; i*i<(1<<15); i++) {
    dp[i*i][1] = 1;
    for (int j=1; j+i*i<(1<<15); j++) {
      dp[i*i+j][2] += dp[j][1];
      dp[i*i+j][3] += dp[j][2];
      dp[i*i+j][4] += dp[j][3];
    }
  }
}

bool solve(void) {
  int n;
  cin >> n;
  if (n == 0) return false;

  cout << dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4] << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precompute();
  while (solve());
  return 0;
}