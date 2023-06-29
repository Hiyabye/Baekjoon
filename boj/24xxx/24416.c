#include <stdio.h>

int fibonacci(int n) {
  int a[40];

  a[0] = a[1] = 1;
  for (int i=2; i<n; i++)
    a[i] = a[i-1]+a[i-2];
  return a[n-1];
}

int main(void) {
  int n;

  scanf("%d", &n);
  printf("%d %d", fibonacci(n), n-2);
  return 0;
}