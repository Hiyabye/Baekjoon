#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

bool check(int r, int c, const vector<vector<int>> &h, int y, int x) {
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= c) return false;
    if (h[y][x] >= h[ny][nx]) return false;
  }
  return true;
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<int>> h(r, vector<int>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> h[i][j];

  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      cout << check(r, c, h, i, j) << " ";
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