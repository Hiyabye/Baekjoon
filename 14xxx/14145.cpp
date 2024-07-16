#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int r, int s, vector<vector<char>> &v, int y, int x, char from, char to) {
  int ret = 1;
  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= r || nx < 0 || nx >= s || v[ny][nx] != from) continue;
    v[ny][nx] = to;
    ret += dfs(r, s, v, ny, nx, from, to);
  }
  return ret;
}

void solve(void) {
  int r, s; cin >> r >> s;
  vector<vector<char>> v(r, vector<char>(s));
  for (int i=0; i<r; i++) for (int j=0; j<s; j++) cin >> v[i][j];

  vector<pair<int, pair<int, int>>> ans;
  for (int i=0; i<r; i++) for (int j=0; j<s; j++) {
    if (v[i][j] != '1') continue;
    v[i][j] = '2';
    ans.push_back({dfs(r, s, v, i, j, '1', '*'), {i, j}});
  }
  sort(ans.begin(), ans.end());

  for (int i=0; i<ans.size(); i++) {
    v[ans[i].second.first][ans[i].second.second] = '1' + i;
    dfs(r, s, v, ans[i].second.first, ans[i].second.second, '*', '1' + i);
  }

  for (int i=0; i<r; i++) {
    for (int j=0; j<s; j++) {
      cout << v[i][j];
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