#include <stdio.h>

int main(void) {
  int n, a, b;

  scanf("%d %d %d", &n, &a, &b);
  if (a > b) printf("Subway");
  else if (a < b) printf("Bus");
  else printf("Anything");
  return 0;
}