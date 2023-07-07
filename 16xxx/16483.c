#include <stdio.h>

int main(void) {
  int t;

  scanf("%d", &t);
  printf("%d", (int)((double)t*t/4.0+0.5));
  return 0;
}