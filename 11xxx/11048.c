#include <stdio.h>

int max(int a, int b, int c) {
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main(void) {
  int n, m;
  int table[1000][1000];

  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      scanf("%d", &table[i][j]);
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (i == 0 && j == 0) continue;
      else if (i == 0) table[i][j] += table[i][j-1];
      else if (j == 0) table[i][j] += table[i-1][j];
      else table[i][j] += max(table[i-1][j-1], table[i-1][j], table[i][j-1]);
    }
  }

  printf("%d", table[n-1][m-1]);
  return 0;
}