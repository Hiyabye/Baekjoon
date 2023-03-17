#include <stdio.h>
#define TRUE 1
#define FALSE 0

int primeCheck(int n) {
  if (n == 1) return FALSE;
  for (int i=2; i<n; i++)
    if (n%i == 0) return FALSE;
  return TRUE;
}

int main(void) {
  int m, n;
  int sum = 0, min = 0;

  scanf("%d %d", &m, &n);
  for (; m<=n; m++) {
    if (primeCheck(m) == TRUE) {
      sum += m;
      if (min == 0) min = m;
    }
  }

  if (sum != 0) printf("%d\n%d\n", sum, min);
  else          printf("-1");
  return 0;
}