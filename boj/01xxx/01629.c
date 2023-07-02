#include <stdio.h>

long long int solve(long long int a, long long int b, long long int c) {
  if (b == 1) return a % c;

  long long int tmp = solve(a, b/2, c);
  if (b % 2 == 0) return (tmp * tmp) % c;
  else return ((tmp * tmp) % c * a) % c;
}

int main(void) {
  long long int a, b, c;

  scanf("%lld %lld %lld", &a, &b, &c);
  printf("%lld", solve(a, b, c));
  return 0;
}