#include <stdio.h>

int main(void) {
  int n, i, num, min=1e9, max=0;

  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &num);
    if (num < min)  min = num;
    if (num > max)  max = num;
  }
  printf("%d", min*max);
  return 0;
}