#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool dp[1111][1111][2];

bool solve(void) {
  int n; cin >> n;
  vector<int> l(n+1, 0), r(n+1, 0);
  for (int i=1; i<=n; i++) cin >> l[i] >> r[i];

  for (int j=0; j<=1000; j++) {
    if (l[1] <= j && j <= r[1]) dp[1][j][0] = true;
    else dp[1][j][1] = true;
  }

  for (int i=2; i<=n; i++) for (int j=0; j<=1000; j++) {
    bool a = false, b = false;
    for (int k=max(0, j-1); k<=min(1000, j+1); k++) {
      if (dp[i-1][k][0]) a = true;
      if (dp[i-1][k][1]) b = true;
    }
    if (l[i] <= j && j <= r[i]) {
      dp[i][j][0] = a;
      dp[i][j][1] = b;
    } else {
      dp[i][j][1] = a;
    }
  }

  for (int j=0; j<=1000; j++) {
    if (dp[n][j][0] || dp[n][j][1]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "World Champion" : "Surrender");
  return 0;
}