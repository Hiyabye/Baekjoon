#include <stdio.h>

void fill(int x, int y, int arr[][100]) {
  for (int i=x; i<x+10; i++)
    for (int j=y; j<y+10; j++)
      arr[i][j] = 1;
}

int main(void) {
  int n, x, y;
  int arr[100][100];
  int area = 0;

  for (int i=0; i<100; i++)
    for (int j=0; j<100; j++)
      arr[i][j] = 0;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d", &x, &y);
    fill(x, y, arr);
  }
  for (int i=0; i<100; i++)
    for (int j=0; j<100; j++)
      if (arr[i][j] == 1) area++;

  printf("%d", area);
  return 0;
}