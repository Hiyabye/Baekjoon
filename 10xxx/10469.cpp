#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

inline bool check(const vector<vector<char>> &v, int x, int y, int d) {
  int nx = x + dx[d], ny = y + dy[d];
  while (0 <= nx && nx < 8 && 0 <= ny && ny < 8) {
    if (v[nx][ny] == '.') {
      nx += dx[d];
      ny += dy[d];
      continue;
    }
    return false;
  }
  return true;
}

bool solve(void) {
  vector<vector<char>> v(8, vector<char>(8));
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) cin >> v[i][j];

  int cnt = 0;
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
    if (v[i][j] == '*') cnt++;
  }
  if (cnt != 8) return false;

  for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
    if (v[i][j] == '.') continue;
    for (int d=0; d<8; d++) {
      if (!check(v, i, j, d)) return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "valid" : "invalid");
  return 0;
}