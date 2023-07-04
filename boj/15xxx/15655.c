#include <stdio.h>

int a[8], b[8], c[8];
int n, m;

void solve(int idx) {
  if (idx == m) {
    for (int i=0; i<m; i++) {
      printf("%d ", b[i]);
    }
    printf("\n");
    return;
  }

  for (int i=0; i<n; i++) {
    if ((idx == 0) || (c[i] == 0 && b[idx-1] < a[i])) {
      c[i] = 1;
      b[idx] = a[i];
      solve(idx+1);
      c[i] = 0;
    }
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
    c[i] = 0;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (a[j] > a[j+1]) {
        int t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }

  solve(0);
  return 0;
}