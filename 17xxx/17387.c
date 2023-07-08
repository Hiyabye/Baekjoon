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

void swap(Coord *a, Coord *b) {
  Coord t = *a;
  *a = *b;
  *b = t;
}

int main(void) {
  Coord a, b, c, d;

  scanf("%lld %lld %lld %lld", &a.x, &a.y, &b.x, &b.y);
  scanf("%lld %lld %lld %lld", &c.x, &c.y, &d.x, &d.y);

  if (ccw(a, b, c)*ccw(a, b, d) == 0 && ccw(c, d, a)*ccw(c, d, b) == 0) {
    if (a.x == c.x) {
      if (a.y > b.y) swap(&a, &b);
      if (c.y > d.y) swap(&c, &d);
      if (a.y <= d.y && c.y <= b.y) printf("1");
      else printf("0");
    } else {
      if (a.x > b.x) swap(&a, &b);
      if (c.x > d.x) swap(&c, &d);
      if (a.x <= d.x && c.x <= b.x) printf("1");
      else printf("0");
    }
  } else {
    if (ccw(a, b, c)*ccw(a, b, d) <= 0 && ccw(c, d, a)*ccw(c, d, b) <= 0) printf("1");
    else printf("0");
  }

  return 0;
}