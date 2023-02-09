#include <stdio.h>

int main(void) {
  int x, n, a[100], b[100], sum = 0;

  scanf("%d", &x);
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d", &a[i], &b[i]);
    sum += a[i]*b[i];
  }

  if (sum == x) printf("Yes");
  else          printf("No");
  return 0;
}