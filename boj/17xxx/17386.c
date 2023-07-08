#include <stdio.h>

typedef struct Coord {
  long long x;
  long long y;
} Coord;

int ccw(Coord a, Coord b, Coord c) {
  long long t = a.x*b.y + b.x*c.y + c.x*a.y - a.y*b.x - b.y*c.x - c.y*a.x;
  if (t > 0) return 1;
  else if (t < 0) return -1;
  else return 0;
}

int main(void) {
  Coord a, b, c, d;

  scanf("%lld %lld %lld %lld", &a.x, &a.y, &b.x, &b.y);
  scanf("%lld %lld %lld %lld", &c.x, &c.y, &d.x, &d.y);

  if (ccw(a, b, c)*ccw(a, b, d) <= 0 && ccw(c, d, a)*ccw(c, d, b) <= 0) printf("1");
  else printf("0");
  return 0;
}