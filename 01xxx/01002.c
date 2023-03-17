#include <stdio.h>

int main(void) {
  int i, t, d;
  int x1, y1, r1, x2, y2, r2;

  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

    if (r1 == r2 && d == 0) printf("-1\n");
    else if ((r1-r2)*(r1-r2) < d && d < (r1+r2)*(r1+r2)) printf("2\n");
    else if ((r1-r2)*(r1-r2) == d || d == (r1+r2)*(r1+r2)) printf("1\n");
    else printf("0\n");
  }
  return 0;
}