#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
  for (int i=2; i<=sqrt(n); i++)
    if (n%i == 0) return false;
  return true;
}

int main(void) {
  int n;

  scanf("%d", &n);
  while (isPrime(n))
    n++;
  printf("%d", n);
  return 0;
}