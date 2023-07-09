#include <stdio.h>

int min(int a, int b) {
  return a < b ? a : b;
}

int main(void) {
  int n, m, max = 0;
  int a[1001][1001], dp[1001][1001];

  scanf("%d %d", &n, &m);
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++) {
      scanf("%1d", &a[i][j]);
    }
  }

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=m; j++) {
      if (a[i][j] == 0) continue;
      if (i == 1 || j == 1) dp[i][j] = 1;
      else dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
      max = max > dp[i][j] ? max : dp[i][j];
    }
  }

  printf("%d", max * max);
  return 0;
}