#include <stdio.h>
#include <stdbool.h>

int n, m;
char a[600][600];
bool checked[600][600];

int find(int x, int y) {
  int count = 0;

  checked[x][y] = true;
  if (x > 0 && a[x-1][y] != 'X' && !checked[x-1][y]) count += find(x-1, y);
  if (x < n-1 && a[x+1][y] != 'X' && !checked[x+1][y]) count += find(x+1, y);
  if (y > 0 && a[x][y-1] != 'X' && !checked[x][y-1]) count += find(x, y-1);
  if (y < m-1 && a[x][y+1] != 'X' && !checked[x][y+1]) count += find(x, y+1);
  if (a[x][y] == 'P') count++;
  return count;
}

int main(void) {
  int x, y;

  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      scanf(" %c", &a[i][j]);
      checked[i][j] = false;
      if (a[i][j] == 'I') {
        x = i;
        y = j;
      }
    }
  }

  int count = find(x, y);
  if (count == 0) printf("TT");
  else printf("%d", count);
  return 0;
}