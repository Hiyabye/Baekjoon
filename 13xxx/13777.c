#include <stdio.h>

void solve(int l, int r, int target) {
  int mid = l + (r - l) / 2;
  printf("%d ", mid);
  if (target > mid) solve(mid + 1, r, target);
  else if (target < mid) solve(l, mid - 1, target);
  else printf("\n");
}

int main(void) {
  int n;

  scanf("%d", &n);
  while (n != 0) {
    solve(1, 50, n);
    scanf("%d", &n);
  }
  return 0;
}