#include <stdio.h>
#include <math.h>

int main(void) {
  int l, a, b, c, d;

  scanf("%d", &l);
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  printf("%d", l - ((double)a/c > (double)b/d ? (int)ceil((double)a/c) : (int)ceil((double)b/d)));
  return 0;
}