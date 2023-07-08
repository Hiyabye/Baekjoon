#include <stdio.h>

int gcd(int a, int b) {
  if (a < b) return gcd(b, a);
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main(void) {
  int t, a, b;

  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &a, &b);
    printf("%d %d\n", lcm(a, b), gcd(a, b));
  }
  return 0;
}