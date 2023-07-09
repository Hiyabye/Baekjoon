#include <stdio.h>

int main(void) {
  int n;
  int a[301], dp[301];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
  }

  if (n == 1) {
    printf("%d", a[1]);
    return 0;
  }

  dp[0] = 0;
  dp[1] = a[1];
  dp[2] = a[1] + a[2];
  for (int i=3; i<=n; i++) {
    dp[i] = a[i] + (dp[i-2] > dp[i-3] + a[i-1] ? dp[i-2] : dp[i-3] + a[i-1]);
  }

  printf("%d", dp[n]);
  return 0;
}