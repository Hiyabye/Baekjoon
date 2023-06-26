#include <stdio.h>

int main(void) {
  char s[10];

  scanf("%s", s);
  switch(s[0]) {
  case 'S': printf("HIGHSCHOOL"); break;
  case 'C': printf("MASTER"); break;
  case '2': printf("0611"); break;
  case 'A': printf("CONTEST"); break;
  }
  return 0;
}