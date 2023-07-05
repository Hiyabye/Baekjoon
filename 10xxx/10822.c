#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int sum = 0;
  char s[101];
  scanf("%s", s);

  char *token = strtok(s, ",");
  while (token != NULL) {
    sum += atoi(token);
    token = strtok(NULL, ",");
  }

  printf("%d", sum);
  return 0;
}