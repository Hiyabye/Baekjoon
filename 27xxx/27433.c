#include <stdio.h>

int main(void) {
  int n;
  long long res = 1;

  scanf("%d", &n);
  for (int i=2; i<=n; i++)
    res *= i;
  printf("%lld", res);
  return 0;
}