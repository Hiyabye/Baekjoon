#include <stdio.h>

int main(void) {
  int l, p, v, idx = 1;

  scanf("%d %d %d", &l, &p, &v);
  while (!(l == 0 && p == 0 && v == 0)) {
    int ans = v/p*l + (v%p > l ? l : v%p);
    printf("Case %d: %d\n", idx++, ans);
    scanf("%d %d %d", &l, &p, &v);
  }
  return 0;
}