#include <stdio.h>

int min(int a, int b) {
  return a < b ? a : b;
}

int main(void) {
  int n, ans = 1000000;
  int cost[1001][3], dp[1001][3];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
  }

  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      dp[1][j] = i == j ? cost[1][j] : 1000000;
    }
    for (int j=2; j<=n; j++) {
      dp[j][0] = min(dp[j-1][1], dp[j-1][2]) + cost[j][0];
      dp[j][1] = min(dp[j-1][2], dp[j-1][0]) + cost[j][1];
      dp[j][2] = min(dp[j-1][0], dp[j-1][1]) + cost[j][2];
    }
    for (int j=0; j<3; j++) {
      if (i == j) continue;
      ans = min(ans, dp[n][j]);
    }
  }

  printf("%d", ans);
  return 0;
}