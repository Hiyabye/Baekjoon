#include <stdio.h>

int main(void) {
  int a, b, c, d, e, f;

  scanf("%d %d %d", &a, &b, &c);
  scanf("%d %d %d", &d, &e, &f);

  printf("%d %d", (c*e-f*b)/(a*e-d*b), (c*d-f*a)/(b*d-e*a));
  return 0;
}