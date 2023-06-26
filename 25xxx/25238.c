#include <stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  if (a*(100-b) >= 10000) printf("0");
  else                    printf("1");
  return 0;
}