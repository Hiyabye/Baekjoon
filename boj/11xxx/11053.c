#include <stdio.h>

int main(void) {
  int n, max = 0;
  int a[1001], dp[1001];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
    dp[i] = 1;
  }

  for (int i=2; i<=n; i++) {
    for (int j=1; j<=i; j++) {
      if (a[i] > a[j]) {
        dp[i] = dp[j]+1 > dp[i] ? dp[j]+1 : dp[i];
      }
    }
  }

  for (int i=1; i<=n; i++) {
    max = max > dp[i] ? max : dp[i];
  }

  printf("%d", max);
  return 0;
}