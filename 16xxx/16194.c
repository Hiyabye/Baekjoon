#include <stdio.h>

int min(int a, int b) {
  return a < b ? a : b;
}

int main(void) {
  int n;
  int p[1001], dp[1001];

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    scanf("%d", &p[i]);
    dp[i] = p[i];
    for (int j=1; j<=i; j++) {
      dp[i] = min(dp[i], p[j] + dp[i-j]);
    }
  }

  printf("%d", dp[n]);
  return 0;
}