#include <stdio.h>

int main(void) {
  int r, w, l;
  int idx = 1;

  scanf("%d", &r);
  if (r == 0) return 0;
  while (r != 0) {
    scanf("%d %d", &w, &l);
    printf("Pizza %d ", idx++);
    if (w*w+l*l<=4*r*r) printf("fits on the table.\n");
    else printf("does not fit on the table.\n");
    scanf("%d", &r);
  }
  return 0;
}