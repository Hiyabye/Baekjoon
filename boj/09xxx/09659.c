#include <stdio.h>

int main(void) {
  long long n;

  scanf("%lld", &n);
  if (n % 2 == 0) printf("CY");
  else printf("SK");
  return 0;
}