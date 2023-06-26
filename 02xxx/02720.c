#include <stdio.h>

int main(void) {
  int t, c;

  scanf("%d", &t); 
  for (int i=0; i<t; i++) {
    scanf("%d", &c);
    printf("%d %d %d %d\n", c/25, c%25/10, c%25%10/5, c%25%10%5);
  }
  return 0;
}