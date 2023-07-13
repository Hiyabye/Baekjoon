#include <stdio.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  int m, x, y;
  int cup[4] = {0, 1, 0, 0};

  scanf("%d", &m);
  for (int i=0; i<m; i++) {
    scanf("%d %d", &x, &y);
    swap(&cup[x], &cup[y]);
  }

  for (int i=1; i<=3; i++) {
    if (cup[i]) printf("%d", i);
  }
  return 0;
}