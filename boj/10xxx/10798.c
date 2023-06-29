#include <stdio.h>
#include <string.h>

int main(void) {
  int len, max = 0;
  char word[5][15];

  for (int i=0; i<5; i++) {
    scanf("%s", word[i]);
    len = strlen(word[i]);
    if (len > max) max = len;
  }
  for (int i=0; i<max; i++)
    for (int j=0; j<5; j++)
      if (strlen(word[j]) >= i+1)
        printf("%c", word[j][i]);
  return 0;
}