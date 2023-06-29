#include <stdio.h>

int t[50][50];

void resetTable(int m, int n) {
  for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
      t[i][j] = 0;
}

void dfs(int m, int n, int x, int y) {
  t[x][y] = 0;
  if (x>0 && t[x-1][y]==1)    dfs(m, n, x-1, y);
  if (x<m-1 && t[x+1][y]==1)  dfs(m, n, x+1, y);
  if (y>0 && t[x][y-1]==1)    dfs(m, n, x, y-1);
  if (y<n-1 && t[x][y+1]==1)  dfs(m, n, x, y+1);
}

int main(void) {
  int T, m, n, k, x, y;

  scanf("%d", &T);
  for (int a=0; a<T; a++) {
    resetTable(m, n);
    scanf("%d %d %d", &m, &n, &k);
    for (int b=0; b<k; b++) {
      scanf("%d %d", &x, &y);
      t[x][y] = 1;
    }
    int count = 0;
    for (int b=0; b<m; b++) {
      for (int c=0; c<n; c++) {
        if (t[b][c] == 1) {
          dfs(m, n, b, c);
          count++;
        }
      }
    }
    printf("%d\n", count);
  }
  return 0;
}