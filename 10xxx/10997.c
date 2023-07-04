#include <stdio.h>

char map[400][400];

void fill(int n) {
  int w = 4*n-3, h = 4*n-1;

  for (int i=0; i<w; i++) map[0][w-1-i] = '*';
  for (int i=0; i<h; i++) map[i][0] = '*';
  for (int i=0; i<w; i++) map[h-1][i] = '*';
  for (int i=0; i<w; i++) map[h-1-i][w-1] = '*';

  for (int i=2; i<2*n-2; i+=2) {
    for (int j=0; j<w-2*(i-1); j++) map[i][w+1-i-j] = '*';
    for (int j=0; j<h-2*i; j++) map[i+j][i] = '*';
    for (int j=0; j<w-2*i; j++) map[h-1-i][i+j] = '*';
    for (int j=0; j<h-2*(i+1); j++) map[h-1-i-j][w-1-i] = '*';
  }

  for (int i=0; i<3; i++) map[2*n-2][2*n-i] = '*';
  for (int i=0; i<3; i++) map[2*n-2+i][2*n-2] = '*';
}

int main(void) {
  int n;

  for (int i=0; i<400; i++) {
    for (int j=0; j<400; j++) {
      map[i][j] = ' ';
    }
  }

  scanf("%d", &n);
  if (n == 1) {
    printf("*");
    return 0;
  }
  fill(n);

  for (int i=0; i<4*n-1; i++) {
    if (i == 1) {
      printf("*\n");
      continue;
    }
    for (int j=0; j<4*n-3; j++) {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }
  return 0;
}