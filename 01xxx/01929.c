#include <stdio.h>

int main(void) {
  int i, j, m, n;
  int num[1000001] = {0, };

  num[0] = 1, num[1] = 1;
  for (i=2; i<1000001/i; i++) {
    if (num[i] == 1) continue;
    for (j=i*i; j<1000001; j += i)
      if (j%i == 0) num[j] = 1;
  }

  scanf("%d %d", &m, &n);
  for (i=m; i<=n; i++)
    if (num[i] == 0)
      printf("%d\n", i);
  return 0;
}