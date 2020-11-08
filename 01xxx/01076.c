#include <stdio.h>
#include <string.h>

int value(char color[]) {
  if (!strcmp(color, "black")) return 0;
  else if (!strcmp(color, "brown")) return 1;
  else if (!strcmp(color, "red")) return 2;
  else if (!strcmp(color, "orange")) return 3;
  else if (!strcmp(color, "yellow")) return 4;
  else if (!strcmp(color, "green")) return 5;
  else if (!strcmp(color, "blue")) return 6;
  else if (!strcmp(color, "violet")) return 7;
  else if (!strcmp(color, "grey")) return 8;
  else if (!strcmp(color, "white")) return 9;
}

int main(void) {
  int num, i, count;
  char color[7];

  scanf("%s", color);
  num = value(color) * 10;
  scanf("%s", color);
  num += value(color);
  scanf("%s", color);
  count = value(color);

  printf("%d", num);
  if (num != 0)
    for (i=0; i<count; i++)
      printf("0");
  return 0;
}