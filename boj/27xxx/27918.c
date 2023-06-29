#include <stdio.h>

int main(void) {
  int n, x = 0, y = 0;
  char win;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf(" %c", &win);
    if (win == 'D') x++;
    else y++;
    if (x-y >= 2 || y-x >= 2) break;
  }
  printf("%d:%d\n", x, y);
  return 0;
}