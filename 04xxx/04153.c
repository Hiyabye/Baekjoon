#include <stdio.h>

int verifyTriangle(int a, int b, int c) {
  if (a>=b && a>=c && b*b+c*c==a*a)       return 1;
  else if (b>=a && b>=c && a*a+c*c==b*b)  return 1;
  else if (c>=a && c>=a && a*a+b*b==c*c)  return 1;
  else                                    return 0;
}

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  while (!(a==0 && b==0 && c==0)) {
    if (verifyTriangle(a, b, c) == 1) printf("right\n");
    else                              printf("wrong\n");
    scanf("%d %d %d", &a, &b, &c);
  }
  return 0;
}