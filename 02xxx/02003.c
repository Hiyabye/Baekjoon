#include <stdio.h>

int main(void) {
  int n, m, tmp;
  int a[10000];

  scanf("%d %d", &n, &m);
  scanf("%d", &a[0]);
  for (int i=1; i<n; i++) {
    scanf("%d", &tmp);
    a[i] = a[i-1] + tmp;
  }

  int count = 0;
  for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++) {
      if (a[j] - (i == 0 ? 0 : a[i-1]) == m) {
        count++;
        break;
      }
    }
  }
  printf("%d", count);
  return 0;
}