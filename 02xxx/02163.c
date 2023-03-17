#include <stdio.h>

int min(int x, int y) {
  return x < y ? x : y;
}

int max(int x, int y) {
  return x > y ? x : y;
}

int main(void) {
  int n, m;

  scanf("%d %d", &n, &m);
  printf("%d", max(n,m)*(min(n,m)-1)+max(n,m)-1);
  return 0;
}