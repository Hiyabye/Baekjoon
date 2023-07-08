#include <stdio.h>

int main(void) {
  double k, d1, d2;

  scanf("%lf", &k);
  scanf("%lf %lf", &d1, &d2);
  printf("%lf", k*k-(d1-d2)*(d1-d2)/4.0);
  return 0;
}