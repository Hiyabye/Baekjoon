#include <stdio.h>

int main(void) {
  long long n, m;

  scanf("%lld %lld", &n, &m);
  if (n > m)  printf("%lld", n-m);
  else        printf("%lld", m-n);
  return 0;
}