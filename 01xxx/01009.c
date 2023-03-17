#include <stdio.h>

int getLastDigit(int a, int b) {
  int i, num = a;

  switch (a) {
    case 1: case 5: case 6: return a;
    case 0: return 10;
    case 2: case 3: case 7: case 8: b %= 4; break;
    case 4: case 9: b %= 2; break;
  }
  for (i=1; i<b+4; i++) {
    num *= a;
    num %= 10;
  }
  return num;
}

int main(void) {
  int i, t, a, b;

  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", getLastDigit(a%10, b));
  }
  return 0;
}