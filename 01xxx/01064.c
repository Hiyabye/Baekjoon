#include <stdio.h>
#include <math.h>

typedef struct Coord {
  int x;
  int y;
} Coord;

int main(void) {
  Coord a, b, c;

  scanf("%d %d %d %d %d %d", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);

  if ((a.x-b.x)*(a.y-c.y) == (a.x-c.x)*(a.y-b.y)) {
    printf("-1.0");
    return 0;
  }

  double ab = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
  double bc = sqrt((b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y));
  double ca = sqrt((c.x-a.x)*(c.x-a.x) + (c.y-a.y)*(c.y-a.y));

  double min = (ab+bc)*2;
  min = min < (bc+ca)*2 ? min : (bc+ca)*2;
  min = min < (ca+ab)*2 ? min : (ca+ab)*2;

  double max = (ab+bc)*2;
  max = max > (bc+ca)*2 ? max : (bc+ca)*2;
  max = max > (ca+ab)*2 ? max : (ca+ab)*2;

  printf("%.15lf", max - min);
  return 0;
}