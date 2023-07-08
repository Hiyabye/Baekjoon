#include <stdio.h>
#include <math.h>

int main(void) {
  double d, h, w;

  scanf("%lf %lf %lf", &d, &h, &w);
  printf("%d %d", (int)floor(d*h/sqrt(h*h+w*w)), (int)floor(d*w/sqrt(h*h+w*w)));
  return 0;
}