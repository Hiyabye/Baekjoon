#include <stdio.h>

int main(void) {
  int n;
  int a[500][500];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<=i; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (int i=1; i<n; i++) {
    for (int j=0; j<=i; j++) {
      if (j == 0) a[i][j] += a[i-1][j];
      else if (j == i) a[i][j] += a[i-1][j-1];
      else a[i][j] += a[i-1][j-1] > a[i-1][j] ? a[i-1][j-1] : a[i-1][j];
    }
  }

  int max = a[n-1][0];
  for (int i=1; i<n; i++) {
    max = max > a[n-1][i] ? max : a[n-1][i];
  }

  printf("%d", max);
  return 0;
}