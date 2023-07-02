#include <stdio.h>

int main(void) {
  int idx = 1;
  char s[333335];

  scanf("%s", s);
  switch (s[0]) {
  case '0': printf("0"); break;
  case '1': printf("1"); break;
  case '2': printf("10"); break;
  case '3': printf("11"); break;
  case '4': printf("100"); break;
  case '5': printf("101"); break;
  case '6': printf("110"); break;
  case '7': printf("111"); break;
  }
  while (s[idx] != '\0') {
    if (s[idx] & 4) printf("1");
    else printf("0");
    if (s[idx] & 2) printf("1");
    else printf("0");
    if (s[idx] & 1) printf("1");
    else printf("0");
    idx++;
  }
  return 0;
}