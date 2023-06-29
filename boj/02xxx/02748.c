#include <stdio.h>

int main(void) {
  int n;
  long long a[90];
  a[0] = 0, a[1] = 1;

  scanf("%d", &n);
  for (int i=0; i<n-1; i++)
    a[i+2] = a[i+1]+a[i];
  printf("%lld", a[n]);
}