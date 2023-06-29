#include <stdio.h>

int main(void) {
  int n, sum = 0, min = 100;

  for (int i=0; i<7; i++) {
    scanf("%d", &n);
    if (n%2 == 1) {
      sum += n;
      min = n < min ? n : min;
    }
  }

  if (sum != 0) printf("%d\n%d", sum, min);
  else          printf("-1");
  return 0;
}