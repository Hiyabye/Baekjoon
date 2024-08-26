#include <iostream>
#include <vector>
#define MOD 1000007
using namespace std;

inline long long calc(int ax, int ay, int bx, int by) {
  vector<vector<long long>> dp(bx-ax+1, vector<long long>(by-ay+1, 0));
  for (int i=0; i<bx-ax+1; i++) dp[i][0] = 1;
  for (int j=0; j<by-ay+1; j++) dp[0][j] = 1;
  for (int i=1; i<bx-ax+1; i++) for (int j=1; j<by-ay+1; j++) {
    dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
  }
  return dp[bx-ax][by-ay];
}

void solve(void) {
  int w, h; cin >> w >> h;
  int x, y; cin >> x >> y;

  cout << calc(1, 1, x, y) * calc(x, y, w, h) % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}