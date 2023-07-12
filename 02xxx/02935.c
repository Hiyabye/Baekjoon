#include <stdio.h>
#include <string.h>

int main(void) {
  int len1, len2;
  char n1[101], n2[101], op;

  scanf("%s", n1);
  scanf(" %c", &op);
  scanf("%s", n2);

  len1 = strlen(n1);
  len2 = strlen(n2);
  if (op == '+') {
    if (len1 > len2) {
      printf("1");
      for (int i=0; i<len1-len2-1; i++) printf("0");
      printf("%s", n2);
    } else if (len1 < len2) {
      printf("1");
      for (int i=0; i<len2-len1-1; i++) printf("0");
      printf("%s", n1);
    } else {
      printf("2");
      for (int i=0; i<len1-1; i++) printf("0");
    }
  } else if (op == '*') {
    printf("1");
    for (int i=0; i<len1+len2-2; i++) printf("0");
  }
  return 0;
}