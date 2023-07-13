#include <stdio.h>

int main(void) {
  int n;
  long long dp[91][2];

  dp[1][0] = 0;
  dp[1][1] = 1;
  for (int i=2; i<=90; i++) {
    dp[i][0] = dp[i-1][0] + dp[i-1][1];
    dp[i][1] = dp[i-1][0];
  }

  scanf("%d", &n);
  printf("%lld", dp[n][0] + dp[n][1]);
  return 0;
}