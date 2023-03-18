#include <stdio.h>
#include <string.h>

int main(void) {
  char word[100];

  scanf("%s", word);
  int len = strlen(word);

  for (int i=0; i<len/10; i++) {
    for (int j=0; j<10; j++)
      printf("%c", word[i*10+j]);
    printf("\n");
  }
  for (int i=0; i<len%10; i++) {
    printf("%c", word[len-len%10+i]);
  }
  return 0;
}