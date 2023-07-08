#include <stdio.h>
#include <math.h>

typedef struct Coord {
  int x;
  int y;
} Coord;

typedef struct Circle {
  Coord c;
  int r;
} Circle;

double distance(Coord a, Coord b) {
  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void solve(void) {
  int n, cnt = 0;
  Coord s, e;
  Circle p[50];

  scanf("%d %d %d %d", &s.x, &s.y, &e.x, &e.y);
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", &p[i].c.x, &p[i].c.y, &p[i].r);
    if (distance(s, p[i].c) < p[i].r && distance(e, p[i].c) > p[i].r) cnt++;
    if (distance(s, p[i].c) > p[i].r && distance(e, p[i].c) < p[i].r) cnt++;
  }
  printf("%d\n", cnt);
}

int main(void) {
  int t;

  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}