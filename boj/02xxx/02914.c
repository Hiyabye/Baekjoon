#include <stdio.h>

int main(void) {
  int a, i;

  scanf("%d %d", &a, &i);
  printf("%d", a*(i-1)+1);
  return 0;
}