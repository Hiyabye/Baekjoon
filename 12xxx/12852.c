#include <stdio.h>

int main(void) {
  int n;
  int dp[1000001][2]; // 0: count, 1: prev

  for (int i=0; i<=1000000; i++) {
    dp[i][0] = 0;
    dp[i][1] = 0;
  }

  scanf("%d", &n);
  for (int i=2; i<=n; i++) {
    dp[i][0] = dp[i-1][0] + 1;
    dp[i][1] = i-1;
    if (i%2 == 0 && dp[i][0] > dp[i/2][0] + 1) {
      dp[i][0] = dp[i/2][0] + 1;
      dp[i][1] = i/2;
    }
    if (i%3 == 0 && dp[i][0] > dp[i/3][0] + 1) {
      dp[i][0] = dp[i/3][0] + 1;
      dp[i][1] = i/3;
    }
  }

  printf("%d\n%d", dp[n][0], n);
  for (int i=n; i!=1; i=dp[i][1])
    printf(" %d", dp[i][1]);
  return 0;
}