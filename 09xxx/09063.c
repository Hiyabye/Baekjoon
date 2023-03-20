#include <stdio.h>

int main(void) {
  int n, x, y, x_min, x_max, y_min, y_max;

  scanf("%d", &n);
  scanf("%d %d", &x, &y);
  x_min = x_max = x;
  y_min = y_max = y;
  for (int i=1; i<n; i++) {
    scanf("%d %d", &x, &y);
    if (x > x_max) x_max = x;
    if (x < x_min) x_min = x;
    if (y > y_max) y_max = y;
    if (y < y_min) y_min = y;
  }
  printf("%d", (x_max-x_min)*(y_max-y_min));
  return 0;
}