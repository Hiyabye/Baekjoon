#include <stdio.h>

long long gcd(long long a, long long b) {
  if (!b) return a;
  return gcd(b, a % b);
}

int main(void) {
  long long a, b;

  scanf("%lld %lld", &a, &b);
  long long g = gcd(a, b);
  for (int i=0; i<g; i++) {
    printf("1");
  }
  return 0;
}