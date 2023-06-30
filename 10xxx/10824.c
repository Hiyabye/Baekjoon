#include <stdio.h>

long long int merge(int a, int b) {
  long long int c = a;
  int d = b;

  while (b > 0) {
    c *= 10;
    b /= 10;
  }
  return c + d;
}

int main(void) {
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%lld", merge(a, b) + merge(c, d));
  return 0;
}