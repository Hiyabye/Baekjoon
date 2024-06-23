#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

void solve(void) {
  int l; cin >> l;
  pair<int, int> a, b;
  cin >> a.first >> a.second;
  cin >> b.first >> b.second;

  vector<vector<int>> ans(l, vector<int>(l, -1)); ans[a.first][a.second] = 0;
  queue<pair<int, int>> q; q.push(a);
  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    if (x == b.first && y == b.second) break;
    for (int i=0; i<8; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= l || ny < 0 || ny >= l || ans[nx][ny] != -1) continue;
      ans[nx][ny] = ans[x][y] + 1;
      q.push({nx, ny});
    }
  }
  cout << ans[b.first][b.second] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}