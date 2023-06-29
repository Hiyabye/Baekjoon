#include <stdio.h>

int main(void) {
  int n, m, x1, y1, x2, y2;
  int buffer, a[1024][1024] = {0};

  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      scanf("%d", &buffer);
      if (i == 0) {
        if (j == 0) a[i][j] = buffer;
        else a[i][j] = a[i][j-1] + buffer;
      } else {
        if (j == 0) a[i][j] = a[i-1][j] + buffer;
        else a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + buffer;
      }
    }
  }

  for (int i=0; i<m; i++) {
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 == 1 && y1 == 1) printf("%d\n", a[x2-1][y2-1]);
    else if (x1 == 1) printf("%d\n", a[x2-1][y2-1] - a[x2-1][y1-2]);
    else if (y1 == 1) printf("%d\n", a[x2-1][y2-1] - a[x1-2][y2-1]);
    else printf("%d\n", a[x2-1][y2-1] - a[x1-2][y2-1] - a[x2-1][y1-2] + a[x1-2][y1-2]);
  }
  return 0;
}