#include <stdio.h>
#include <math.h>

int check(int num) {
  if ((int)sqrt(num)*(int)sqrt(num) == num) return 1;
  else return 0;
}

int main(void) {
  int m, n, sum = 0, first = 0;

  scanf("%d", &m);
  scanf("%d", &n);

  for (int i=m; i<=n; i++) {
    if (check(i)) {
      if (sum == 0) first = i;
      sum += i;
    }
  }

  if (sum == 0) printf("-1");
  else printf("%d\n%d", sum, first);
  return 0;
}