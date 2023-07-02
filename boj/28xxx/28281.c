#include <stdio.h>

int main(void) {
  int n, x, a_pre, a_now, min = 2000;

  scanf("%d %d", &n, &x);
  scanf("%d", &a_pre);
  for (int i=1; i<n; i++) {
    scanf("%d", &a_now);
    min = min < a_pre + a_now ? min : a_pre + a_now;
    a_pre = a_now;
  }

  printf("%d", min * x);
  return 0;
}