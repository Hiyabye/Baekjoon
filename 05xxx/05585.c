#include <stdio.h>

int main(void) {
  int n, remain = 1000, count = 0;

  scanf("%d", &n);
  remain -= n;

  while (remain > 0) {
    if (remain >= 500) {
      remain -= 500;
      count++;
    } else if (remain >= 100) {
      remain -= 100;
      count++;
    } else if (remain >= 50) {
      remain -= 50;
      count++;
    } else if (remain >= 10) {
      remain -= 10;
      count++;
    } else if (remain >= 5) {
      remain -= 5;
      count++;
    } else if (remain >= 1) {
      remain -= 1;
      count++;
    }
  }
  printf("%d", count);
  return 0;
}