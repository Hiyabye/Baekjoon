#include <stdio.h>

int n, cnt = 0;
int board[25][25];
int size[25*25];

int group(int x, int y, int id) {
  int count = 1;

  board[x][y] = id;
  if (x > 0 && board[x-1][y] == 1) count += group(x-1, y, id);
  if (x < n-1 && board[x+1][y] == 1) count += group(x+1, y, id);
  if (y > 0 && board[x][y-1] == 1) count += group(x, y-1, id);
  if (y < n-1 && board[x][y+1] == 1) count += group(x, y+1, id);
  return count;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int arr[], int n) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(&arr[j], &arr[j+1]);
      }
    }
  }
}

int main(void) {

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      scanf("%1d", &board[i][j]);
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (board[i][j] == 1) {
        size[cnt] = group(i, j, cnt+2);
        cnt++;
      }
    }
  }

  bubbleSort(size, cnt);

  printf("%d\n", cnt);
  for (int i=0; i<cnt; i++) {
    printf("%d\n", size[i]);
  }
  return 0;
}