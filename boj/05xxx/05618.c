#include <stdio.h>

void three(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  int min = a < (b < c ? b : c) ? a : (b < c ? b : c);

  for (int i=1; i<=min; i++) {
    if (a%i == 0 && b%i == 0 && c%i == 0) {
      printf("%d\n", i);
    }
  }
}

void two(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  int min = a < b ? a : b;

  for (int i=1; i<=min; i++) {
    if (a%i == 0 && b%i == 0) {
      printf("%d\n", i);
    }
  }
}

int main(void) {
  int n, a, b, c;

  scanf("%d", &n);
  if (n == 2) two();
  else three();

  return 0;
}