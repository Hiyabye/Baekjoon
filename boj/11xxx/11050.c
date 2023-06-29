#include <stdio.h>

int main(void) {
  int n, k, a = 1;

  scanf("%d %d", &n, &k);
  for (int i=n; i>n-k; i--) a *= i;
  for (int i=k; i>1; i--)   a /= i;
  printf("%d", a);
  return 0;
}