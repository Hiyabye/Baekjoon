#include <stdio.h>

int main(void) {
  int t, d = 0;

  for (int i=0; i<10; i++) {
    scanf("%d", &t);
    if (t == 1) d++;
    else if (t == 2) d += 2;
    else if (t == 3) d--;
  }
  d %= 4;
  if (d < 0) d += 4;

  if (d == 0) printf("N");
  else if (d == 1) printf("E");
  else if (d == 2) printf("S");
  else printf("W");
  return 0;
}