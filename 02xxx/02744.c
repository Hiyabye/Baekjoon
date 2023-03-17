#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char word[100];

  scanf("%s", word);
  for (int i=0; i<strlen(word); i++) {
    if (islower(word[i])) word[i] = toupper(word[i]);
    else                  word[i] = tolower(word[i]);
  }
  printf("%s", word);
  return 0;
}