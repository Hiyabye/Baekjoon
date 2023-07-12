#include <stdio.h>
#include <string.h>

int main(void) {
  int t;
  char s[1001];

  scanf("%d", &t);
  while (t--) {
    scanf(" %[^\n]", s);
    char *tok = strtok(s, " ");
    while (tok != NULL) {
      for (int i=0; i<strlen(tok); i++) {
        printf("%c", tok[strlen(tok)-i-1]);
      }
      printf(" ");
      tok = strtok(NULL, " ");
    }
    printf("\n");
  }
  return 0;
}