#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idx(char *c, int key) {
  return strlen(c) == key+2 ? c[key+1] - '0' : (c[key+1] - '0') * 10 + (c[key+2] - '0');
}

int main(void) {
  int m, x = 0;
  char c[10];

  scanf("%d", &m);
  for (int i=0; i<m; i++) {
    scanf(" %9[^\n]", c);

    if (c[0] == 'a') if (c[1] == 'd') x |= (1 << idx(c, 3)); // add
                     else x = (1 << 21) - 2; // all
    if (c[0] == 'c') printf("%d\n", x & (1 << idx(c, 5)) ? 1 : 0); // check
    if (c[0] == 'e') x = 0; // empty
    if (c[0] == 'r') x &= ~(1 << idx(c, 6)); // remove
    if (c[0] == 't') x ^= (1 << idx(c, 6)); // toggle
  }
  return 0;
}