#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 0, n, num = 666;
  char str[8];

  scanf("%d", &n);
  while (i < n) {
    sprintf(str, "%d", num);
    if (strstr(str, "666") != NULL) i++;
    num++;
  }
  printf("%d", --num);
  return 0;
}