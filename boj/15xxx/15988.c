#include <stdio.h>

#define MOD 1000000009

int main(void) {
  int t, n;
  long long dp[1000001];

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i=4; i<=1000000; i++) {
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
  }

  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%lld\n", dp[n]);
  }
  return 0;
}