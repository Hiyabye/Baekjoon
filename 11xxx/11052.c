#include <stdio.h>

int main(void) {
  int n;
  int p[1001], dp[1001];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d", &p[i]);
    dp[i] = p[i];
    for (int j=1; j<i; j++) {
      dp[i] = dp[i] > dp[i-j] + p[j] ? dp[i] : dp[i-j] + p[j];
    }
  }

  printf("%d", dp[n]);
  return 0;
}