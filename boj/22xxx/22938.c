#include <stdio.h>

int main(void) {
  long long x1, y1, r1, x2, y2, r2;

  scanf("%lld %lld %lld", &x1, &y1, &r1);
  scanf("%lld %lld %lld", &x2, &y2, &r2);

  printf("%s", (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) < (r1+r2)*(r1+r2) ? "YES" : "NO");
  return 0;
}