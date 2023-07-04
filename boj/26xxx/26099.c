#include <stdio.h>

int main(void) {
  long long n, three = 0, five = 0;

  scanf("%lld", &n);
  five = n / 5;
  n %= 5;

  switch (n) {
    case 1: five--; n += 5; three = n / 3; break;
    case 2: five -= 2; n += 10; three = n / 3; break;
    case 3: three = n / 3; break;
    case 4: five--; n += 5; three = n / 3; break;
  }
  
  if (five < 0) printf("-1");
  else printf("%lld", three + five);
  return 0;
}