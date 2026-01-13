#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

const int MAX_N = 10;
const int INF = 1e9;

int n;
int w[MAX_N][MAX_N];
int dp[MAX_N][1 << MAX_N];

inline int tsp(int cur, int mask) {
  if (mask == (1 << n) - 1) {
    return w[cur][0] == 0 ? INF : w[cur][0];
  }

  int &ret = dp[cur][mask];
  if (ret != -1) return ret;
  ret = INF;

  for (int nxt=0; nxt<n; nxt++) {
    if (mask & (1 << nxt)) continue;
    if (w[cur][nxt] == 0) continue;
    ret = min(ret, tsp(nxt, mask | (1 << nxt)) + w[cur][nxt]);
  }
  return ret;
}

void solve(void) {
  cin >> n;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> w[i][j];
  memset(dp, -1, sizeof(dp));

  cout << tsp(0, 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}