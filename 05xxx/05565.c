#include <stdio.h>

int main(void) {
  int sum = 0, n;

  scanf("%d", &sum);
  for (int i=0; i<9; i++) {
    scanf("%d", &n);
    sum -= n;
  }
  printf("%d", sum);
  return 0;
}