#include <stdio.h>

int main(void) {
  int n, multi = 1, count = 0, straight = 1;

  scanf("%d", &n);
  while (n > 1) {
    n -= 6*multi;
    count++;
    multi++;
  }

  multi = 1;
  while (straight < n) {
    for (int i=0; i<6; i++) {
      straight += multi;
      if (straight == n) {
        count++;
        break;
      }
    }
    multi++;
  }
  printf("%d", count+1);
  return 0;
}