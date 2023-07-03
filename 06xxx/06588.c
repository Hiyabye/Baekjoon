#include <stdio.h>
#include <math.h>

int prime(int n) {
  for (int i=3; i<=sqrt(n); i+=2) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  int n, a[1000001] = {0, 0, 1, };

  for (int i=3; i<=1000000; i+=2) {
    a[i] = prime(i);
  }

  scanf("%d", &n);
  while (n != 0) {
    int good = 0;
    for (int i=2; i<=n/2; i++) {
      if (a[i] && a[n-i]) {
        printf("%d = %d + %d\n", n, i, n-i);
        good = 1;
        break;
      }
    }
    if (!good) printf("Goldbach's conjecture is wrong.\n");
    scanf("%d", &n);
  }
  return 0;
}