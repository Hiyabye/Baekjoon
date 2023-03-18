#include <stdio.h>
#include <math.h>

int num[123456*2+1];

int isPrime(int n) {
  int i = 2;
  
  if (n == 1) return 0;
  while (1) {
    if (i <= sqrt(n)) {
      if (n % i == 0) return 0;
      else i++;
    } else return 1;
  }
}

int main(void) {
  int n;

  for (int i=1; i<=123456*2; i++) {
    if (isPrime(i) == 1)  num[i] = 1;
    else                  num[i] = 0;
  }

  scanf("%d", &n);
  while (n != 0) {
    int count = 0;
    for (int i=n+1; i<=n*2; i++)
      if (num[i] == 1) count++;

    printf("%d\n", count);
    scanf("%d", &n);
  }
  return 0;
}