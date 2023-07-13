#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1000001];
  scanf("%s", s);

  int len = strlen(s);
  if (len % 3 == 1) printf("%d", s[0]-'0');
  else if (len % 3 == 2) printf("%d", ((s[0]-'0')<<1) + (s[1]-'0'));

  for (int i=len%3; i<len; i+=3) {
    printf("%d", ((s[i]-'0')<<2) + ((s[i+1]-'0')<<1) + (s[i+2]-'0'));
  }
  return 0;
}