#include <stdio.h>

char map[400][400];

void layer(int idx, int n) {
  int len = 4*n-3-idx*2;
  for (int i=idx*2; i<len; i++) {
    map[idx*2][i] = '*';
    map[len-1][i] = '*';
    map[i][idx*2] = '*';
    map[i][len-1] = '*';
  }
}

int main(void) {
  int n;

  for (int i=0; i<400; i++) {
    for (int j=0; j<400; j++) {
      map[i][j] = ' ';
    }
  }

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    layer(i, n);
  }

  for (int i=0; i<4*n-3; i++) {
    for (int j=0; j<4*n-3; j++) {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }
  return 0;
}