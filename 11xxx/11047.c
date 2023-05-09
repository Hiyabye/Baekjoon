#include <stdio.h>

int main(void) {
  int n, k, a[10], cnt = 0;

  scanf("%d %d", &n, &k);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[n-i-1]);
  }
  for (int i=0; i<n; i++) {
    while (k >= a[i]) {
      cnt++;
      k -= a[i];
    }
  }
  printf("%d", cnt);
  return 0;
}