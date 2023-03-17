#include <stdio.h>

int fibonacci(int n) {
  int a[1000001];

  a[0] = a[1] = 1;
  for (int i=2; i<=n; i++) {
    a[i] = a[i-1]+a[i-2];
    a[i] %= 15746;
  }
  return a[n];
}

int main(void) {
  int n;

  scanf("%d", &n);
  printf("%d", fibonacci(n));
  return 0;
}