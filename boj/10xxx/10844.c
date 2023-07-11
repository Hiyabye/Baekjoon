#include <stdio.h>

#define MOD 1000000000

int main(void) {
  int n;
  long long ans = 0;
  long long dp[101][10];

  dp[1][0] = 0;
  for (int i=1; i<=9; i++) {
    dp[1][i] = 1;
  }
  for (int i=2; i<=100; i++) {
    dp[i][0] = dp[i-1][1] % MOD;
    for (int j=1; j<=8; j++) {
      dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD;
    }
    dp[i][9] = dp[i-1][8] % MOD;
  }

  scanf("%d", &n);
  for (int i=0; i<=9; i++) {
    ans += dp[n][i];
  }
  printf("%lld", ans % MOD);
  return 0;
}