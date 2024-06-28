#include <iostream>
#include <vector>
using namespace std;

int check(vector<vector<int> >& board) {
  for (int i=0; i<3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
  }
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
  return 0;
}

void solve(void) {
  int cur; cin >> cur;
  vector<vector<int> > board(3, vector<int>(3, 0));

  int ans = 0;
  for (int i=0; i<9; i++) {
    int x, y; cin >> x >> y;
    x--; y--;
    board[x][y] = cur;
    if (ans == 0) ans = check(board);
    cur = 3 - cur;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}