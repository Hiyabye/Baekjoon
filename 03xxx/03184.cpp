#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

pair<int, int> dfs(vector<string> &a, int y, int x) {
  if (a[y][x] == '#') return {0, 0};
  pair<int, int> ret = {0, 0};
  if (a[y][x] == 'o') ret.first++;
  else if (a[y][x] == 'v') ret.second++;
  a[y][x] = '#';
  for (int i=0; i<4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= a.size() || nx < 0 || nx >= a[0].size()) continue;
    pair<int, int> tmp = dfs(a, ny, nx);
    ret.first += tmp.first, ret.second += tmp.second;
  }
  return ret;
}

void solve(void) {
  int r, c; cin >> r >> c;
  vector<string> a(r);
  for (int i=0; i<r; i++) cin >> a[i];

  int o = 0, v = 0;
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      pair<int, int> ret = dfs(a, i, j);
      if (ret.first > ret.second) o += ret.first;
      else v += ret.second;
    }
  }
  cout << o << " " << v;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}