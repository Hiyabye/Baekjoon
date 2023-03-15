#include <stdio.h>

int main(void) {
  int n, m, x, y, a, sum[100000];

  scanf("%d %d", &n, &m);
  scanf("%d", &sum[0]);
  for (int i=1; i<n; i++) {
    scanf("%d", &a);
    sum[i] = sum[i-1] + a;
  }
  for (int i=0; i<m; i++) {
    scanf("%d %d", &x, &y);
    if (x > 1)  printf("%d\n", sum[y-1]-sum[x-2]);
    else        printf("%d\n", sum[y-1]);
  }
  return 0;
}