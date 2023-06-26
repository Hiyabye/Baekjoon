#include <stdio.h>

int find_p(int a[], int n) {
  for (int i=2; i<=n; i++) {
    if (a[i-1] == 1) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int n, k;
  int a[1000];

  scanf("%d %d", &n, &k);
  for (int i=2; i<=n; i++) {
    a[i-1] = 1;
  }

  int p = find_p(a, n);
  while (k > 0) {
    for (int i=2; i<=n; i++) {
      if (i % p == 0 && a[i-1] == 1) {
        a[i-1] = 0;
        k--;
        if (k == 0) {
          printf("%d", i);
          return 0;
        }
      }
    }
    p = find_p(a, n);
  }
  return 0;
}