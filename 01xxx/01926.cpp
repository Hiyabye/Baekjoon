#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int> > board(500, vector<int>(500));

int check(int x, int y, int idx) {
  board[x][y] = idx;

  int ret = 1;
  if (x > 0 && board[x-1][y] == 1) ret += check(x-1, y, idx);
  if (x < n-1 && board[x+1][y] == 1) ret += check(x+1, y, idx);
  if (y > 0 && board[x][y-1] == 1) ret += check(x, y-1, idx);
  if (y < m-1 && board[x][y+1] == 1) ret += check(x, y+1, idx);
  return ret;
}

void solve(void) {
  cin >> n >> m;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> board[i][j];
    }
  }

  int cnt = 0, big = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (board[i][j] == 1) {
        big = max(big, check(i, j, 2+cnt++));
      }
    }
  }
  cout << cnt << "\n" << big;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}