#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<bool>> visited(m, vector<bool>(n, false));

  int ans = -1, y = 0, x = 0, d = 0;
  while (!visited[y][x]) {
    visited[y][x] = true;
    int ny = y + dy[d], nx = x + dx[d];
    if (ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx]) {
      d = (d + 1) % 4;
      ny = y + dy[d], nx = x + dx[d];
      ans++;
    }
    y = ny, x = nx;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}