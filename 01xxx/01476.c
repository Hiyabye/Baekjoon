#include <stdio.h>

int main(void) {
  int e, s, m;

  scanf("%d %d %d", &e, &s, &m);
  while (!(e == s && s == m)) {
    if (e < s || e < m) e += 15;
    if (s < e || s < m) s += 28;
    if (m < e || m < s) m += 19;
  }
  printf("%d", e);
  return 0;
}