#include <stdio.h>

typedef struct Coord {
  int x;
  int y;
} Coord;

int main(void) {
  Coord p1, p2, p3;

  scanf("%d %d", &p1.x, &p1.y);
  scanf("%d %d", &p2.x, &p2.y);
  scanf("%d %d", &p3.x, &p3.y);

  int d = (p2.y-p3.y)*p1.x + (p1.y-p2.y)*p3.x + (p3.y-p1.y)*p2.x;
  if (d < 0) printf("-1");
  else if (d > 0) printf("1");
  else printf("0");
  return 0;
}