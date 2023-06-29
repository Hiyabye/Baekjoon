#include <stdio.h>

int main(void) {
  int k, n, m;

  scanf("%d %d %d", &k, &n, &m);
  if (k*n > m) printf("%d", k*n-m);
  else printf("0");
  return 0;
}