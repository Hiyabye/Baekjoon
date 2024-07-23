#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline long long dist(long long ax, long long ay, long long bx, long long by) {
  return abs(ax - bx) + abs(ay - by);
}

inline long long calc(long long sx, long long sy, long long ex, long long ey, int m) {
  long long ret = 0, cx = sx, cy = sy;
  while (m--) {
    long long x, y; cin >> x >> y;
    ret += dist(cx, cy, x, y);
    cx = x, cy = y;
  }
  return ret + dist(cx, cy, ex, ey);
}

void solve(void) {
  int n; cin >> n;
  long long sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;

  vector<pair<long long, int>> ans(n);
  for (int i=0; i<n; i++) {
    int m; cin >> m;
    ans[i] = {calc(sx, sy, ex, ey, m), i+1};
  }
  cout << min_element(ans.begin(), ans.end())->second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}