#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100];

  scanf("%[^\n]", s);
  for (int i=0; i<strlen(s); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      printf("%c", (s[i]-'A'+13)%26+'A');
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      printf("%c", (s[i]-'a'+13)%26+'a');
    } else {
      printf("%c", s[i]);
    }
  }
  return 0;
}