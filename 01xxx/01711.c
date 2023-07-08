#include <stdio.h>

typedef struct Coord {
  long long x;
  long long y;
} Coord;

int n, a[3];
Coord p[1500];

int triangle(Coord a, Coord b, Coord c) {
  long long ab = (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
  long long bc = (b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y);
  long long ca = (c.x-a.x)*(c.x-a.x) + (c.y-a.y)*(c.y-a.y);

  if (ab >= bc && ab >= ca && ab == bc+ca) return 1;
  if (bc >= ab && bc >= ca && bc == ab+ca) return 1;
  if (ca >= ab && ca >= bc && ca == ab+bc) return 1;
  return 0;
}

int solve(int idx) {
  if (idx == 3) {
    return triangle(p[a[0]], p[a[1]], p[a[2]]);
  }

  int count = 0;
  if (idx == 0) {
    for (int i=0; i<n; i++) {
      a[idx] = i;
      count += solve(idx+1);
    }
  } else {
    for (int i=a[idx-1]+1; i<n; i++) {
      a[idx] = i;
      count += solve(idx+1);
    }
  }
  return count;
}

int main(void) {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%lld %lld", &p[i].x, &p[i].y);
  }

  printf("%d", solve(0));
  return 0;
}