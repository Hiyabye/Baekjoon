#include <stdio.h>
#include <math.h>

int isPrime(unsigned int n) {
  if (n == 0 || n == 1) return 0;
  if (n == 2) return 1;
  for (int i=2; i<=sqrt(n); i++) {
    if (n%i == 0) return 0;
  }
  return 1;
}

unsigned int find(unsigned int n) {
  while (1) {
    if (isPrime(n)) return n;
    n++;
  }
}

int main(void) {
  int t;
  unsigned int n;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%u", &n);
    printf("%u\n", find(n));
  }
  return 0;
}