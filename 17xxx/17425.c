#include <stdio.h>

int main(void) {
  int t, n;
  long long a[1000001] = {0};

  for (int i=1; i<=1000000; i++) {
    for (int j=1; i*j<=1000000; j++) {
      a[i*j] += i;
    }
    a[i] += a[i-1];
  }

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d", &n);
    printf("%lld\n", a[n]);
  }
  return 0;
}