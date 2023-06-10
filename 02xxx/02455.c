#include <stdio.h>

int main(void) {
  int in, out, p;

  scanf("0 %d", &p);
  int max = p;
  for (int i=1; i<4; i++) {
    scanf("%d %d", &out, &in);
    p = p-out+in;
    max = p > max ? p : max;
  }
  
  printf("%d", max);
  return 0;
}