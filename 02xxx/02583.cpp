#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<vector<bool> > &board, int x, int y) {
  board[x][y] = true;
  int ret = 1;

  if (x > 0 && !board[x-1][y]) ret += check(board, x-1, y);
  if (x < board.size()-1 && !board[x+1][y]) ret += check(board, x+1, y);
  if (y > 0 && !board[x][y-1]) ret += check(board, x, y-1);
  if (y < board[0].size()-1 && !board[x][y+1]) ret += check(board, x, y+1);
  return ret;
}

void solve(void) {
  int m, n, k, x1, y1, x2, y2;
  cin >> m >> n >> k;
  vector<vector<bool> > board(m, vector<bool>(n, false));
  for (int i=0; i<k; i++) {
    cin >> x1 >> y1 >> x2 >> y2;
    for (int j=y1; j<y2; j++) {
      for (int k=x1; k<x2; k++) {
        board[j][k] = true;
      }
    }
  }

  int cnt = 0;
  vector<int> ans;
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      if (!board[i][j]) {
        cnt++;
        ans.push_back(check(board, i, j));
      }
    }
  }

  sort(ans.begin(), ans.end());
  cout << cnt << "\n";
  for (int i=0; i<cnt; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}