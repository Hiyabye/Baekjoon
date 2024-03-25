#include <stdio.h>

int ans[10];

void calc(int n, int k) {
  while (n) {
    ans[n % 10] += k;
    n /= 10;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);

  int l = 1, r = n, k = 1;
  while (l <= r) {
    while (l <= r && l % 10 != 0) calc(l++, k);
    while (l <= r && r % 10 != 9) calc(r--, k);
    if (l > r) break;
    l /= 10; r /= 10;
    for (int i=0; i<=9; i++) ans[i] += (r-l+1) * k;
    k *= 10;
  }

  for (int i=0; i<=9; i++) {
    printf("%d ", ans[i]);
  }
}
