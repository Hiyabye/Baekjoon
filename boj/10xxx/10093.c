#include <stdio.h>

void swap(long long *a, long long *b) {
  long long tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {
  long long a, b;

  scanf("%lld %lld", &a, &b);
  if (a > b) swap(&a, &b);
  else if (a == b || a+1 == b) {
    printf("0");
    return 0;
  }

  printf("%lld\n", b-a-1);
  for (long long i=a+1; i<b; i++) {
    printf("%lld ", i);
  }
  return 0;
}