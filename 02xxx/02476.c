#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void) {
  int n, a, b, c, ans = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) ans = max(ans, 10000+a*1000);
    else if (a == b || a == c) ans = max(ans, 1000+a*100);
    else if (b == c) ans = max(ans, 1000+b*100);
    else ans = max(max(ans, a*100), max(b*100, c*100));
  }
  printf("%d", ans);
  return 0;
}