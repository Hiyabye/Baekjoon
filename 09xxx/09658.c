#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);
  if (n % 7 == 1 || n % 7 == 3) printf("CY");
  else printf("SK");
  return 0;
}