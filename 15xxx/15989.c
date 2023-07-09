#include <stdio.h>

int main(void) {
  int t, n;
  int dp[10001][4];

  dp[1][1] = dp[2][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
  for (int i=4; i<=10000; i++) {
    dp[i][1] = dp[i-1][1];
    dp[i][2] = dp[i-2][1] + dp[i-2][2];
    dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
  }

  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%d\n", dp[n][1] + dp[n][2] + dp[n][3]);
  }
  return 0;
}