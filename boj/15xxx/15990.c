#include <stdio.h>

#define MOD 1000000009

int main(void) {
  int t, n;
  long long dp[100001][4];

  dp[1][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
  for (int i=4; i<=100000; i++) {
    dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % MOD;
    dp[i][2] = (dp[i-2][3] + dp[i-2][1]) % MOD;
    dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % MOD;
  }

  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%lld\n", (dp[n][1] + dp[n][2] + dp[n][3]) % MOD);
  }
  return 0;
}