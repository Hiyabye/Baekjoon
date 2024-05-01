#include <iostream>
#include <vector>
using namespace std;

inline int sz(int n) {
  int ret = 1;
  while (n--) ret *= 5;
  return ret;
}

void calc(vector<vector<char>> &board, int x, int y, int n) {
  if (n == 0) {
    board[x][y] = '*';
    return;
  }

  calc(board, x, y + sz(n-1)*2, n-1);
  calc(board, x + sz(n-1), y + sz(n-1)*2, n-1);
  for (int i=0; i<5; i++) calc(board, x + sz(n-1)*2, y + sz(n-1)*i, n-1);
  for (int i=1; i<4; i++) calc(board, x + sz(n-1)*3, y + sz(n-1)*i, n-1);
  calc(board, x + sz(n-1)*4, y + sz(n-1)*1, n-1);
  calc(board, x + sz(n-1)*4, y + sz(n-1)*3, n-1);
}

void solve(void) {
  int n; cin >> n;

  vector<vector<char>> board(sz(n), vector<char>(sz(n), ' '));
  calc(board, 0, 0, n);

  for (int i=0; i<sz(n); i++) {
    for (int j=0; j<sz(n); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}