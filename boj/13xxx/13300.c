#include <stdio.h>

int main(void) {
  int n, k, s, y, cnt = 0;
  int p[2][6];

  for (int i=0; i<2; i++) {
    for (int j=0; j<6; j++) {
      p[i][j] = 0;
    }
  }

  scanf("%d %d", &n, &k);
  for (int i=0; i<n; i++) {
    scanf("%d %d", &s, &y);
    p[s][y-1]++;
  }

  for (int i=0; i<2; i++) {
    for (int j=0; j<6; j++) {
      cnt += p[i][j] % k == 0 ? p[i][j] / k : p[i][j] / k + 1;
    }
  }

  printf("%d", cnt);
  return 0;
}