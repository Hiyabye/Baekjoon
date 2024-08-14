#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

vector<vector<int>> v;
unordered_set<int> s;

void dfs(int y, int x, int idx, int cur) {
  if (idx == 6) {
    s.insert(cur);
    return;
  }
  cur = cur * 10 + v[y][x];

  for (int i=0; i<4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= 5 || nx < 0 || nx >= 5) continue;
    dfs(ny, nx, idx+1, cur);
  }
}

void solve(void) {
  v.resize(5, vector<int>(5));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      dfs(i, j, 0, 0);
    }
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}