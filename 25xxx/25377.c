#include <stdio.h>

int main(void) {
  int n, a, b, min = 2001;

  scanf("%d", &n);
  while (n--) {
    scanf("%d %d", &a, &b);
    if (a > b) continue;
    min = min < b ? min : b;
  }

  printf("%d", min == 2001 ? -1 : min);
  return 0;
}