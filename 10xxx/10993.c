#include <stdio.h>

int n;
char map[1024][2048];

void triangle(int k, int x, int y) {
  int size = (1<<k)-1;

  if (k % 2 == 1) {
    for (int i=0; i<size; i++) {
      map[y+i][x-i] = '*';
      map[y+i][x+i] = '*';
      map[y+size-1][x-i] = '*';
      map[y+size-1][x+i] = '*';
    }
  } else {
    for (int i=0; i<size; i++) {
      map[y-i][x-i] = '*';
      map[y-i][x+i] = '*';
      map[y-size+1][x-i] = '*';
      map[y-size+1][x+i] = '*';
    }
  }
}

int main(void) {
  scanf("%d", &n);

  int width = (1<<(n+1))-3;
  int height = (1<<n)-1;

  for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
      map[i][j] = ' ';
    }
  }

  int y = n % 2 == 1 ? 0 : height-1;
  for (int i=n; i>=1; i--) {
    triangle(i, width-height, y);
    if (i % 2 == 1) y += ((1<<i)-3);
    else y += (3-(1<<i));
  }

  for (int i=0; i<height; i++) {
    for (int j=width-1; j>=0; j--) {
      if (map[i][j] == ' ') map[i][j] = '\0';
      else break;
    }
  }

  for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
      if (map[i][j] != '\0') printf("%c", map[i][j]);
      else break;
    }
    printf("\n");
  }
  return 0;
}