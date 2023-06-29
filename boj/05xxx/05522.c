#include <stdio.h>

int main(void) {
  long long int a, sum = 0;

  for (int i=0; i<5; i++) {
    scanf("%lld", &a);
    sum += a;
  }
  printf("%lld", sum);
  return 0;
}