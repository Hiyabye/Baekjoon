#include <stdio.h>

int max(int a, int b) {
  return (a > b) ? a : b;
}

int abs(int n) {
  return (n >= 0) ? n : -n;
}

int digits(int n) {
  int a = 0;

  while (n > 0) {
    n /= 10;
    a++;
  }
  return a;
}

int solve(int r, int c) {
  int n = max(abs(r), abs(c));

  if (abs(r) >= abs(c))
    if (r >= 0)   return 4*n*n+2*n+1+(n+c);     // bottom line
    else          return 4*n*n-2*n+1+(n-c);     // top line
  else
    if (c >= 0)   return 4*n*n-4*n+2+(n-r-1);   // right line
    else          return 4*n*n+1+(n+r);         // left line
}

int main(void) {
  int r1, c1, r2, c2;
  int t[50][5];

  scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
  for (int i=0; i<r2-r1+1; i++) {
    for (int j=0; j<c2-c1+1; j++) {
      t[i][j] = solve(r1+i, c1+j);
    }
  }

  int maxDigits = digits(max(max(t[0][0], t[0][c2-c1]), max(t[r2-r1][0], t[r2-r1][c2-c1])));
  for (int i=0; i<r2-r1+1; i++) {
    for (int j=0; j<c2-c1+1; j++) {
      if (j == 0) printf("%*d", maxDigits, t[i][j]);
      else printf("%*d", maxDigits+1, t[i][j]);
    }
    printf("\n");
  }
  return 0;
}