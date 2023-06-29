#include <stdio.h>

int main(void) {
  long long a, b;

  scanf("%lld %lld", &a, &b);
  printf("%lld", (a+b)*(a-b));
  return 0;
}