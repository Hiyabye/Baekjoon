#include <stdio.h>

#define MOD 1000000007

int main(void) {
  int n;
  int a[1000001];

  a[0] = 0;
  a[1] = 1;
  for (int i=2; i<=1000000; i++) {
    a[i] = (a[i-1] + a[i-2]) % MOD;
  }

  scanf("%d", &n);
  printf("%d", a[n]);
  return 0;
}