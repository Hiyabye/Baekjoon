#include <stdio.h>
#include <string.h>

int main(void) {
  int count = 0;
  char s[1000000];

  scanf("%s", s);
  for (int i=1; i<strlen(s); i++) {
    if (s[i-1] != s[i]) count++;
  }
  printf("%d", (count+1)/2);
  return 0;
}