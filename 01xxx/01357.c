#include <stdio.h>

int rev(int x) {
  int n = 0;
  while (x > 0) {
    n *= 10;
    n += x % 10;
    x /= 10;
  }
  return n;
}

int main(void) {
  int x, y;

  scanf("%d %d", &x, &y);
  printf("%d", rev(rev(x) + rev(y)));
  return 0;
}