#include <stdio.h>

int gcd(int a, int b) {
  int n = (a < b) ? a : b;

  while (!(a%n==0 && b%n==0)) n--;
  return n;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

int main(void) {
  int t, a, b;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", lcm(a, b));
  }
  return 0;
}