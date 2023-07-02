#include <stdio.h>

char s[3072][6144];

void solve(int n, int x, int y) {
  if (n == 3) {
    s[y-2][x+2] = '*';
    s[y-1][x+1] = s[y-1][x+3] = '*';
    for (int i=0; i<5; i++) s[y][x+i] = '*';
    return;
  }

  solve(n/2, x+n/2, y-n/2);
  solve(n/2, x, y);
  solve(n/2, x+n, y);
}

int main(void) {
  int n;

  for (int i=0; i<3072; i++) {
    for (int j=0; j<6144; j++) {
      s[i][j] = ' ';
    }
  }

  scanf("%d", &n);
  solve(n, 0, n-1);

  for (int i=0; i<n; i++) {
    for (int j=0; j<2*n-1; j++) {
      printf("%c", s[i][j]);
    }
    printf("\n");
  }
  return 0;
}