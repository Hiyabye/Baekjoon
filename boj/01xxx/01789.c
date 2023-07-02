#include <stdio.h>

int main(void) {
  unsigned int s, n = 1;

  scanf("%u", &s);
  while (s >= n) {
    s -= n;
    n++;
  }
  printf("%u", n-1);
  return 0;
}