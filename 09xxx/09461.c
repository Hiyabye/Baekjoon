#include <stdio.h>

int main(void) {
  int t, n;
  long long p[100];

  p[0] = p[1] = p[2] = 1;
  p[3] = p[4] = 2;

  for (int i=5; i<100; i++)
    p[i] = p[i-5]+p[i-1];

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d", &n);
    printf("%lld\n", p[n-1]);
  }
  return 0;
}