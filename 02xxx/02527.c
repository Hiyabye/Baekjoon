#include <stdio.h>

typedef struct Square {
  int x, y, p, q;
} Square;

char solve(Square a, Square b) {
  if (a.x > b.p || a.p < b.x || a.y > b.q || a.q < b.y) return 'd';
  if ((a.x == b.p && a.y == b.q) || (a.x == b.p && a.q == b.y) || (a.p == b.x && a.y == b.q) || (a.p == b.x && a.q == b.y)) return 'c';
  if (a.x == b.p || a.p == b.x || a.y == b.q || a.q == b.y) return 'b';
  return 'a';
}

int main(void) {
  Square a, b;

  for (int i=0; i<4; i++) {
    scanf("%d %d %d %d %d %d %d %d", &a.x, &a.y, &a.p, &a.q, &b.x, &b.y, &b.p, &b.q);
    printf("%c\n", solve(a, b));
  }
  return 0;
}