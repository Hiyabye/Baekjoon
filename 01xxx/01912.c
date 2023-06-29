#include <stdio.h>

int main(void) {
  int n, max;
  int a[100000], b[100000];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  max = b[0] = a[0];
  for (int i=1; i<n; i++) {
    b[i] = b[i-1]+a[i] > a[i] ? b[i-1]+a[i] : a[i];
    max = max > b[i] ? max : b[i];
  }

  printf("%d", max);
  return 0;
}