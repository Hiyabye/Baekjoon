#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  queue<pair<int, int>> q; q.push({0, 0});
  while (!q.empty()) {
    auto [y, x] = q.front(); q.pop();
    if (v[y][x] == -1) return true;
    if (v[y][x] == 0) continue;
    int ny = y + v[y][x], nx = x;
    if (ny >= 0 && ny < n && nx >= 0 && nx < n) q.push({ny, nx});
    ny = y, nx = x + v[y][x];
    if (ny >= 0 && ny < n && nx >= 0 && nx < n) q.push({ny, nx});
    v[y][x] = 0;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "HaruHaru" : "Hing");
  return 0;
}