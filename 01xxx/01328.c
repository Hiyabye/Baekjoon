#include <stdio.h>

#define MOD 1000000007

int main(void) {
  int n, l, r;
  long long dp[101][101][101];

  scanf("%d %d %d", &n, &l, &r);
  for (int i=1; i<=100; i++) {
    for (int j=1; j<=100; j++) {
      for (int k=1; k<=100; k++) {
        dp[i][j][k] = 0;
      }
    }
  }

  dp[1][1][1] = 1;
  for (int i=2; i<=n; i++) {
    for (int j=1; j<=i; j++) {
      for (int k=1; k<=i; k++) {
        dp[i][j][k] = (dp[i-1][j-1][k] + dp[i-1][j][k-1] + dp[i-1][j][k]*(i-2)) % MOD;
      }
    }
  }

  printf("%lld", dp[n][l][r]);
  return 0;
}