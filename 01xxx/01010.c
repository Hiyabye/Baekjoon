#include <stdio.h>

int nCr(int n, int r) {
  int res=1, i=n-r+1, j=2;

  while (i<=n || j<=r) {
    if (i<=n) {
      res *= i;
      i++;
    }
    if (j<=r && res%j == 0) {
      res /= j;
      j++;
    }
  }
  return res;
}

int main(void) {
  int t, n, m;

  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d %d", &n, &m);
    printf("%d\n", nCr(m, n));
  }
  return 0;
}