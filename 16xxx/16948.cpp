#include <iostream>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;

int dr[6] = {-2, -2, 0, 0, 2, 2};
int dc[6] = {-1, 1, -2, 2, -1, 1};

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return (p.first << 16) ^ p.second;
  }
};

void solve(void) {
  int n; cin >> n;
  int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;

  queue<pair<int, int>> q;
  unordered_map<pair<int, int>, int, pair_hash> dist;
  q.push({r1, c1}); dist[{r1, c1}] = 0;

  while (!q.empty()) {
    auto [r, c] = q.front(); q.pop();
    if (r == r2 && c == c2) {
      cout << dist[{r, c}];
      return;
    }
    for (int i=0; i<6; i++) {
      int nr = r + dr[i], nc = c + dc[i];
      if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
      if (dist.find({nr, nc}) != dist.end()) continue;
      q.push({nr, nc});
      dist[{nr, nc}] = dist[{r, c}] + 1;
    }
  }
  cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}