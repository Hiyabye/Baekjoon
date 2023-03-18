#include <stdio.h>

int isPrime(int n) {
  if (n == 1) return 0;
  for (int i=2; i<n; i++)
    if (n%i == 0) return 0;
  return 1;
}

void goldNumber(int n) {
  for (int i=n/2; i>=1; i--) {
    if (isPrime(i)==1 && isPrime(n-i)==1) {
      printf("%d %d\n", i, n-i);
      break;
    }
  }
}

int main(void) {
  int t, n;

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d", &n);
    goldNumber(n);
  }
  return 0;
}