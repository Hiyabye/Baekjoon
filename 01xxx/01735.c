#include <stdio.h>

int min(int a, int b) {
  return a < b ? a : b;
}

int main(void) {
  int a1, b1, a2, b2, a3, b3;

  scanf("%d %d", &a1, &b1);
  scanf("%d %d", &a2, &b2);
  a3 = a1*b2+a2*b1;
  b3 = b1*b2;

  for (int i=2; i<=min(a3, b3); i++) {
    if (a3%i==0 && b3%i==0) {
      a3 /= i;
      b3 /= i;
      i--;
    }
  }
  printf("%d %d", a3, b3);
  return 0;
}