#include <stdio.h>

int n;
int board[15][15];

void addQueen(int x, int y) {
  for (int i=0; i<n; i++) {
    board[x][i]++;
    board[i][y]++;
  }
  for (int i=0; i<n; i++) {
    if (x+i<n && y+i<n) board[x+i][y+i]++;
    if (x-i>=0 && y-i>=0) board[x-i][y-i]++;
    if (x+i<n && y-i>=0) board[x+i][y-i]++;
    if (x-i>=0 && y+i<n) board[x-i][y+i]++;
  }
}

void removeQueen(int x, int y) {
  for (int i=0; i<n; i++) {
    board[x][i]--;
    board[i][y]--;
  }
  for (int i=0; i<n; i++) {
    if (x+i<n && y+i<n) board[x+i][y+i]--;
    if (x-i>=0 && y-i>=0) board[x-i][y-i]--;
    if (x+i<n && y-i>=0) board[x+i][y-i]--;
    if (x-i>=0 && y+i<n) board[x-i][y+i]--;
  }
}

int game(int index) {
  if (index == n) {
    return 1;
  }

  int count = 0;
  for (int i=0; i<n; i++) {
    if (board[index][i] == 0) {
      addQueen(index, i);
      count += game(index+1);
      removeQueen(index, i);
    }
  }
  return count;
}

int main(void) {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      board[i][j] = 0;
    }
  }
  printf("%d", game(0));
  return 0;
}