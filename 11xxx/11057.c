#include <stdio.h>

#define MOD 10007

int main(void) {
  int n, ans = 0;
  int dp[1001][10];

  for (int i=0; i<=9; i++) {
    dp[1][i] = 1;
  }
  for (int i=2; i<=1000; i++) {
    for (int j=0; j<=9; j++) {
      dp[i][j] = dp[i-1][j];
    }
    for (int j=1; j<=9; j++) {
      dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
    }
  }

  scanf("%d", &n);
  for (int i=0; i<=9; i++) {
    ans = (ans + dp[n][i]) % MOD;
  }
  printf("%d", ans);
  return 0;
}