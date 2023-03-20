#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  while (!(a==0 && b==0 && c==0)) {
    if (a > b) swap(&a, &b);
    if (b > c) swap(&b, &c);
    if (a > b) swap(&a, &b);
    if (a+b <= c) printf("Invalid\n");
    else if (a==b && b==c) printf("Equilateral\n");
    else if (a==b || b==c || c==b) printf("Isosceles\n");
    else printf("Scalene\n");
    scanf("%d %d %d", &a, &b, &c);
  }
  return 0;
}