#include <stdio.h>

int main(void) {
  int n, tmp, sum = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &tmp);
    sum += tmp;
  }
  printf("%d", sum-n+1);
  return 0;
}