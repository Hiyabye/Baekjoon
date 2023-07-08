#include <stdio.h>

int main(void) {
  int three, two, one;

  scanf("%d %d %d", &three, &two, &one);
  int a = three*3 + two*2 + one;
  scanf("%d %d %d", &three, &two, &one);
  int b = three*3 + two*2 + one;

  if (a > b) printf("A");
  else if (a < b) printf("B");
  else printf("T");
  return 0;
}