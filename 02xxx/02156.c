#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void) {
  int n;
  int a[10001], dp[10001];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
  }

  dp[0] = 0;
  dp[1] = a[1];
  dp[2] = a[1] + a[2];
  for (int i=3; i<=n; i++) {
    dp[i] = max(max(dp[i-3]+a[i-1]+a[i], dp[i-2]+a[i]), dp[i-1]);
  }

  printf("%d", dp[n]);
  return 0;
}