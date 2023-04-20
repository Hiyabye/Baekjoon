#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
  int b, res = 0;
  char n[10];

  scanf("%s %d", n, &b);
  for (int i=0; i<strlen(n); i++) {
    if (n[i] >= 'A' && n[i] <= 'Z') res += (n[i] - 'A' + 10) * pow(b, strlen(n)-i-1);
    else                            res += (n[i] - '0') * pow(b, strlen(n)-i-1);
  }
  printf("%d", res);
  return 0;
}