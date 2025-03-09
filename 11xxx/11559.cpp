#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

inline bool bfs(vector<vector<char>> &v, int x, int y, char c) {
  queue<pair<int, int>> q; q.push({x, y});
  queue<pair<int, int>> tmp; tmp.push({x, y});
  vector<vector<bool>> visited(12, vector<bool>(6, false)); visited[x][y] = true;
  int cnt = 1; v[x][y] = '.';
  while (!q.empty()) {
    auto [x, y] = q.front(); q.pop();
    for (int i=0; i<4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx<0 || nx>=12 || ny<0 || ny>=6 || visited[nx][ny] || v[nx][ny] != c) continue;
      v[nx][ny] = '.'; visited[nx][ny] = true;
      q.push({nx, ny}); tmp.push({nx, ny});
      cnt++;
    }
  }

  if (cnt < 4) {
    while (!tmp.empty()) {
      auto [x, y] = tmp.front(); tmp.pop();
      v[x][y] = c;
    }
    return false;
  }
  return true;
}

inline void gravity(vector<vector<char>> &v) {
  for (int i=0; i<6; i++) {
    vector<char> tmp;
    for (int j=11; j>=0; j--) {
      if (v[j][i] != '.') tmp.push_back(v[j][i]);
    }
    for (int j=0; j<tmp.size(); j++) v[11-j][i] = tmp[j];
    for (int j=tmp.size(); j<12; j++) v[11-j][i] = '.';
  }
}

void solve(void) {
  vector<vector<char>> v(12, vector<char>(6));
  for (int i=0; i<12; i++) for (int j=0; j<6; j++) cin >> v[i][j];

  int ans = 0;
  while (true) {
    bool flag = false;
    for (int i=0; i<12; i++) for (int j=0; j<6; j++) {
      if (v[i][j] == '.') continue;
      if (bfs(v, i, j, v[i][j])) flag = true;
    }
    if (!flag) break;
    gravity(v);
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}