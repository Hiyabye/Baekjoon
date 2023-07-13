#include <stdio.h>

int n, k;
int w[101], v[101];
int dp[101][100001];

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void) {
  scanf("%d %d", &n, &k);
  for (int i=1; i<=n; i++) {
    scanf("%d %d", &w[i], &v[i]);
  }

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=k; j++) {
      if (w[i] > j) dp[i][j] = dp[i-1][j];
      else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
    }
  }

  printf("%d", dp[n][k]);
  return 0;
}