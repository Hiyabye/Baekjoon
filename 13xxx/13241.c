#include <stdio.h>

long long int min(long long int a, long long int b) {
  return a < b ? a : b;
}

long long int gcd(long long int a, long long int b) {
  for (long long int i=min(a, b); i>=1; i--) {
    if (a%i==0 && b%i==0) return i;
  }
  return 1;
}

long long int lcm(long long int a, long long int b) {
  return a*b/gcd(a, b);
}

int main(void) {
  long long int a, b;

  scanf("%lld %lld", &a, &b);
  printf("%lld", lcm(a, b));
  return 0;
}