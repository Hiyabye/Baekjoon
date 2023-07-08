#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  char x[10];

  scanf("%s", x);
  if (x[0] == '0') {
    if (x[1] == 'x') {
      sscanf(x, "%x", &n);
      printf("%d", n);
    } else {
      sscanf(x, "%o", &n);
      printf("%d", n);
    }
  } else {
    printf("%s", x);
  }
  return 0;
}