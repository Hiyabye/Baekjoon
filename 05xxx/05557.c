#include <stdio.h>

int main(void) {
  int n, a[100];
  long long dp[100][21] = {0};

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  dp[0][a[0]] = 1;
  for (int i=1; i<n-1; i++) {
    for (int j=0; j<=20; j++) {
      if (dp[i-1][j]) {
        if (j+a[i] <= 20) dp[i][j+a[i]] += dp[i-1][j];
        if (j-a[i] >= 0) dp[i][j-a[i]] += dp[i-1][j];
      }
    }
  }

  printf("%lld", dp[n-2][a[n-1]]);
  return 0;
}