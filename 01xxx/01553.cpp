#include <iostream>
#include <vector>
using namespace std;

int dy[2] = {0, 1};
int dx[2] = {1, 0};

vector<vector<char>> board;
vector<vector<bool>> visited, used;

inline int c2i(char c) { return c - '0'; }

int backtrack(int y, int x) {
  if (y == 8) return 1;
  if (visited[y][x]) return backtrack(y+(x+1)/7, (x+1)%7);

  int ret = 0;
  for (int i=0; i<2; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (nx < 0 || nx >= 7 || ny < 0 || ny >= 8) continue;
    int a = c2i(board[y][x]), b = c2i(board[ny][nx]);
    if (visited[ny][nx] || used[a][b]) continue;
    used[a][b] = used[b][a] = true;
    visited[y][x] = visited[ny][nx] = true;
    ret += backtrack(y+(x+1)/7, (x+1)%7);
    visited[y][x] = visited[ny][nx] = false;
    used[a][b] = used[b][a] = false;
  }
  return ret;
}

void solve(void) {
  board.assign(8, vector<char>(7));
  for (int i=0; i<8; i++) for (int j=0; j<7; j++) cin >> board[i][j];

  visited.assign(8, vector<bool>(7, false));
  used.assign(7, vector<bool>(7, false));
  cout << backtrack(0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}