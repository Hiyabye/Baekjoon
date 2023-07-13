#include <stdio.h>

int main(void) {
  int n, k;
  int a[10001], dp[10001];

  dp[0] = 1;
  for (int i=1; i<=10000; i++) {
    dp[i] = 0;
  }

  scanf("%d %d", &n, &k);
  for (int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
    for (int j=a[i]; j<=k; j++) {
      dp[j] += dp[j-a[i]];
    }
  }

  printf("%d", dp[k]);
  return 0;
}