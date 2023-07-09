#include <stdio.h>

int main(void) {
  int n;
  int two = 0, five = 0;

  scanf("%d", &n);
  five = n / 5;
  n %= 5;

  switch (n % 5) {
  case 1: five--; two+=3; break;
  case 2: two++; break;
  case 3: five--; two+=4; break;
  case 4: two+=2; break;
  }

  printf("%d", five < 0 ? -1 : two + five);
  return 0;
}