#include <stdio.h>

int calculate(int x, int y) {
  int add = 0;
  int count = 0;

  while (x<y) {
    add++;
    x += add;
    count++;
    if (x>=y) break;
    y -= add;
    count++;
    if (x>=y) break;
  }
  return count;
}

int main(void) {
  int i, t, x, y;

  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d %d", &x, &y);
    printf("%d\n", calculate(x, y));
  }
  return 0;
}