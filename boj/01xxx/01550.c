#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int i, num = 0;
  char hexa[7];

  scanf("%s", hexa);
  for (i=0; i<strlen(hexa); i++) {
    if (isdigit(hexa[i]))       num += (hexa[i]-'0') * pow(16, strlen(hexa)-i-1);
    else if (isalpha(hexa[i]))  num += (hexa[i]-'A'+10) * pow(16, strlen(hexa)-i-1);
  }
  printf("%d", num);
  return 0;
}