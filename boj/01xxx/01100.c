#include <stdio.h>

int getCount(char line[], int type) {
  int count = 0;

  for (int i=0; i<4; i++)
    if (line[i*2+type] == 'F') count++;

  return count;
}

int main(void) {
  int i, count = 0;
  char line[9];

  for (i=0; i<8; i++) {
    scanf("%s", line);
    count += getCount(line, i%2);
  }
  printf("%d", count);
  return 0;
}