#include <stdio.h>

int main(void) {
  int n, m, a;
  long long sum = 0;

  scanf("%d %d", &n, &m);
  for (int i=0; i<n+m; i++) {
    scanf("%d", &a);
    sum += a;
  }

  printf("%lld", sum);
  return 0;
}