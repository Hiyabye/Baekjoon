#include <stdio.h>

int a[8];
int n, m;

void solve(int idx) {
  if (idx == m) {
    for (int i=0; i<m; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");
    return;
  }

  if (idx == 0) {
    for (int i=1; i<=n; i++) {
      a[idx] = i;
      solve(idx+1);
    }
  } else {
    for (int i=a[idx-1]; i<=n; i++) {
      a[idx] = i;
      solve(idx+1);
    }
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  solve(0);
  return 0;
}