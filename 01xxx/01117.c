#include <stdio.h>

int main(void) {
  long long w, h, f, c, x1, y1, x2, y2;

  scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &w, &h, &f, &c, &x1, &y1, &x2, &y2);

  long long res = w*h;
  if (f <= w/2) {
    if (f <= x1) {
      res -= (y2-y1)*(x2-x1)*(c+1);
    } else if (f < x2) {
      res -= (y2-y1)*(f-x1)*(c+1)*2;
      res -= (y2-y1)*(x2-f)*(c+1);
    } else {
      res -= (y2-y1)*(x2-x1)*(c+1)*2;
    }
  } else {
    if (w-f <= x1) {
      res -= (y2-y1)*(x2-x1)*(c+1);
    } else if (w-f < x2) {
      res -= (y2-y1)*(w-f-x1)*(c+1)*2;
      res -= (y2-y1)*(x2-(w-f))*(c+1);
    } else {
      res -= (y2-y1)*(x2-x1)*(c+1)*2;
    }
  }

  printf("%lld", res);
  return 0;
}