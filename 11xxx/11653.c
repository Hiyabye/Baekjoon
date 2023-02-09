#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);
start:
  for (int i=2; i<=n; i++) {
    if (n%i == 0) {
      printf("%d\n", i);
      n /= i;
      goto start;
    }
  }
  return 0;
}