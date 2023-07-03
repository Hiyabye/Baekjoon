#include <stdio.h>

int a[7];
int n, m;

void solve(int idx) {
  if (idx == m) {
    for (int i=0; i<m; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");
    return;
  }

  for (int i=1; i<=n; i++) {
    a[idx] = i;
    solve(idx+1);
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  solve(0);
  return 0;
}