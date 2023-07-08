#include <stdio.h>
#include <math.h>

long double ab(long double x) {
  return x < 0 ? -x : x;
}

long double newton(long double a, long double b, long double c, long double x) {
  return x - (a*x+b*sin(x)-c) / (a+b*cos(x));
}

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  long double x = (long double)c/a;
  long double x_pre = x-1;
  while (ab(x-x_pre) > 1e-10) {
    x_pre = x;
    x = newton((long double)a, (long double)b, (long double)c, x);
  }

  printf("%.20Lf", x);
  return 0;
}