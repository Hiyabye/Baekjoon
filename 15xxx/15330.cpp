#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int m;
vector<pair<int, int>> p, q;
vector<bool> visited;

int calc(void) {
  int ret = 0;
  for (int i=0; i<m/2-1; i++) {
    for (int j=i+1; j<m/2; j++) {
      if (q[i].second == 0 && q[j].second == 0) ret++;
      else if (q[i].second == 0 || q[j].second == 0) continue;
      else if (q[i].first * q[j].second == q[i].second * q[j].first) ret++;
    }
  }
  return ret;
}

int backtrack(int cur, int idx) {
  if (cur == m/2) return calc();

  int ret = 0;
  for (int i=idx; i<m-1; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    for (int j=i+1; j<m; j++) {
      if (visited[j]) continue;
      visited[j] = true;
      q[cur] = {p[i].first - p[j].first, p[i].second - p[j].second};
      ret = max(ret, backtrack(cur+1, i+1));
      visited[j] = false;
    }
    visited[i] = false;
  }
  return ret;
}

void solve(void) {
  cin >> m;
  p.resize(m); q.resize(m/2); visited.resize(m, false);
  for (int i=0; i<m; i++) cin >> p[i].first >> p[i].second;

  cout << backtrack(0, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}