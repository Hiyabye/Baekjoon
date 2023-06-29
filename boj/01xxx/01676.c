#include <stdio.h>

int min(int x, int y) {
  return x < y ? x : y;
}

int findTwo(int x) {
  return x%2 == 0 ? 1+findTwo(x/2) : 0;
}

int findFive(int x) {
  return x%5 == 0 ? 1+findFive(x/5) : 0;
}

int main(void) {
  int n, two = 0, five = 0;

  scanf("%d", &n);
  for (int i=1; i<=n; i++) {
    two += findTwo(i);
    five += findFive(i);
  }
  printf("%d", min(two, five));
  return 0;
}