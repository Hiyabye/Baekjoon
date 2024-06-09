#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  int rg, cg, rp, cp; cin >> rg >> cg >> rp >> cp;
  vector<vector<char>> board(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> board[i][j];

  int cnt = 0;
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) {
    if (board[i][j] == 'P') cnt++;
  }
  cout << (cnt != rp * cp);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}