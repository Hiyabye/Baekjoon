#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

void solve(void) {
  int n;
  int a[2][100001], dp[2][100001];

  scanf("%d", &n);
  for (int i=0; i<2; i++) {
    for (int j=1; j<=n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  dp[0][1] = a[0][1];
  dp[1][1] = a[1][1];
  for (int i=2; i<=n; i++) {
    dp[0][i] = max(a[0][i] + dp[1][i-1], dp[0][i-1]);
    dp[1][i] = max(a[1][i] + dp[0][i-1], dp[1][i-1]);
  }
  printf("%d\n", dp[0][n] > dp[1][n] ? dp[0][n] : dp[1][n]);
}

int main(void) {
  int t;

  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}