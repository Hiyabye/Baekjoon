#include <stdio.h>

int main(void) {
  int n, num = 10;
  
  scanf("%d", &n);
  while (n > num) {
    if (n%num >= 5*(num/10)) {
      n -= (n%num);
      n += num;
    } else {
      n -= (n%num);
    }
    num *= 10;
  }
  printf("%d", n);
  return 0;
}