#include <stdio.h>

int main(void) {
  int n, sum = 0;

  for (int i=0; i<4; i++) {
    scanf("%d", &n);
    sum += n;
  }
  printf("%d\n%d", sum/60, sum%60);
  return 0;
}