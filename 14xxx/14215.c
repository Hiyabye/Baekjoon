#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  if (a > b) swap(&a, &b);
  if (b > c) swap(&b, &c);
  if (a > b) swap(&a, &b);
  if (a+b <= c) c = a+b-1;  // a < b < c
  printf("%d", a+b+c);
  return 0;
}