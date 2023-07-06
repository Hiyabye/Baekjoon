#include <stdio.h>

int main(void) {
  int in, out, count;

  scanf("%d %d", &out, &count);
  int max = count;

  for (int i=1; i<10; i++) {
    scanf("%d %d", &out, &in);
    count = count - out + in;
    max = count > max ? count : max;
  }

  printf("%d", max);
  return 0;
}