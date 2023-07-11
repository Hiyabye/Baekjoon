#include <stdio.h>

int n, a, len = 0;
int lis[1000000];

int bSearch(int l, int r, int target) {
  while (l < r) {
    int m = (l+r)/2;
    if (target > lis[m]) l = m+1;
    else r = m;
  }
  return r;
}

int main(void) {
  scanf("%d", &n);

  scanf("%d", &a);
  lis[len++] = a;
  for (int i=1; i<n; i++) {
    scanf("%d", &a);
    if (a > lis[len-1]) lis[len++] = a;
    else lis[bSearch(0, len-1, a)] = a;
  }

  printf("%d", len);
  return 0;
}