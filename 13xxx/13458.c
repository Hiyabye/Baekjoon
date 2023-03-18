#include <stdio.h>

int main(void) {
  int n, b, c, a[1000001];
  long long sum = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
  scanf("%d %d", &b, &c);

  sum += n;
  for (int i=0; i<n; i++) {
    a[i] -= b;
    if (a[i] <= 0) continue;
    sum += (a[i]/c);
    a[i] -= (a[i]/c)*c;
    while (a[i] > 0) {
      a[i] -= c;
      sum++;
    }
  }

  printf("%lld", sum);
  return 0;
}