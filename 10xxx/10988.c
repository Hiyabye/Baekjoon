#include <stdio.h>
#include <string.h>

int check(char word[]) {
  int len = strlen(word);

  for (int i=0; i<len; i++)
    if (word[i] != word[len-i-1]) return 0;
  return 1;
}

int main(void) {
  char word[100];

  scanf("%s", word);
  printf("%d", check(word));
  return 0;
}