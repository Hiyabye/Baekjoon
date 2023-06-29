#include <stdio.h>

int simulation(int map[8][8], int n, int m) {
  int changed = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (map[i][j] != 2) continue;
      if (i > 0 && map[i-1][j] == 0) {
        map[i-1][j] = 2;
        changed = 1;
      }
      if (i < n-1 && map[i+1][j] == 0) {
        map[i+1][j] = 2;
        changed = 1;
      }
      if (j > 0 && map[i][j-1] == 0) {
        map[i][j-1] = 2;
        changed = 1;
      }
      if (j < m-1 && map[i][j+1] == 0) {
        map[i][j+1] = 2;
        changed = 1;
      }
    }
  }
  return changed;
}

int calc(int map[8][8], int n, int m) {
  int count = 0, tmp[8][8];

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      tmp[i][j] = map[i][j];
    }
  }

  while (simulation(tmp, n, m)) {
    ;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (tmp[i][j] == 0) {
        count++;
      }
    }
  }
  return count;
}

int main(void) {
  int n, m, map[8][8], max = 0;

  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      scanf("%d", &map[i][j]);
    }
  }

  for (int i=0; i<n*m; i++) {
    for (int j=i+1; j<n*m; j++) {
      for (int k=j+1; k<n*m; k++) {
        if (map[i/m][i%m] != 0 || map[j/m][j%m] != 0 || map[k/m][k%m] != 0) continue;
        map[i/m][i%m] = 1;
        map[j/m][j%m] = 1;
        map[k/m][k%m] = 1;
        int tmp = calc(map, n, m);
        max = tmp > max ? tmp : max;
        map[i/m][i%m] = 0;
        map[j/m][j%m] = 0;
        map[k/m][k%m] = 0;
      }
    }
  }

  printf("%d", max);
  return 0;
}