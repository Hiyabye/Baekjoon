#include <stdio.h>
#include <string.h>

int main(void) {
  int t;
  char str[1000];

  scanf("%d", &t);
  for (int i=0; i<t; i++) {
    scanf("%s", str);
    printf("%c%c\n", str[0], str[strlen(str)-1]);
  }
  return 0;
}