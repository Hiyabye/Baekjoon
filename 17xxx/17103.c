#include <stdio.h>

int main(void) {
  int t, n;
  int prime[1000001];

  prime[0] = prime[1] = 0;
  for (int i=2; i<=1000000; i++) {
    prime[i] = 1;
  }

  for (int i=2; i<=1000; i++) {
    if (!prime[i]) continue;
    for (int j=2; i*j<=1000000; j++) {
      prime[i*j] = 0;
    }
  }

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%d", &n);
    int count = 0;
    for (int j=2; j<=n/2; j++) {
      if (prime[j] && prime[n-j]) {
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}