#include <stdio.h>

int main(void) {
  int n, m, k;
  int team = 0;

  scanf("%d %d %d", &n, &m, &k);
  while (n>=2 && m>=1 && n+m>=k+3) {
    n -= 2;
    m -= 1;
    team++;
  }

  printf("%d", team);
  return 0;
}