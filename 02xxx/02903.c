#include <stdio.h>

int pow2(int n) {
  int r = 1;
  for (int i=0; i<n; i++) {
    r *= 2;
  }
  return r;
}

int main(void) {
  int n;

  scanf("%d", &n);
  printf("%d", (pow2(n)+1)*(pow2(n)+1));
  return 0;
}