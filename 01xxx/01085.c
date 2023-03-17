#include <stdio.h>

int main(void) {
  int x, y, w, h;

  scanf("%d %d %d %d", &x, &y, &w, &h);
  int l = x, r = w-x, u = h-y, d=y;
  
  if (l<=r && l<=u && l<=d)       printf("%d", l);
  else if (r<=l && r<=u && r<=d)  printf("%d", r);
  else if (u<=l && u<=r && u<=d)  printf("%d", u);
  else                            printf("%d", d);
  return 0;
}