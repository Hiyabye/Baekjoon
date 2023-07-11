#include <stdio.h>

int n, m, k;
int a[10][10];
int b[10][10];

int solve(int r, int c, int cnt, int sum) {
  if (cnt == k) return sum;

  int max = -1000000;
  for (int i=r; i<n; i++) {
    for (int j=c; j<m; j++) {
      if (b[i][j]) continue;
      if (i > 0 && b[i-1][j]) continue;
      if (i < n-1 && b[i+1][j]) continue;
      if (j > 0 && b[i][j-1]) continue;
      if (j < m-1 && b[i][j+1]) continue;
      b[i][j] = 1;
      int tmp = solve(r, c, cnt+1, sum+a[i][j]);
      max = max > tmp ? max : tmp;
      b[i][j] = 0;
    }
  }
  return max;
}

int main(void) {
  scanf("%d %d %d", &n, &m, &k);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      scanf("%d", &a[i][j]);
      b[i][j] = 0;
    }
  }

  printf("%d", solve(0, 0, 0, 0));
  return 0;
}