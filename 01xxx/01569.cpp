#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> x, y;

inline bool check(int lx, int rx, int by, int ty) {
  for (int i=0; i<n; i++) {
    if ((x[i] == lx || x[i] == rx) && by <= y[i] && y[i] <= ty) continue;
    if ((y[i] == by || y[i] == ty) && lx <= x[i] && x[i] <= rx) continue;
    return false;
  }
  return true;
}

int solve(void) {
  cin >> n;
  x.resize(n); y.resize(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  int x1 = x[0], x2 = x[0], y1 = y[0], y2 = y[0];
  for (int i=1; i<n; i++) {
    x1 = min(x1, x[i]); x2 = max(x2, x[i]);
    y1 = min(y1, y[i]); y2 = max(y2, y[i]);
  }
  if (x2-x1 == 0 || y2-y1 == 0) return max(x2-x1, y2-y1);

  int k = max(x2-x1, y2-y1);
  if (check(x1, x1+k, y1, y1+k)) return k;
  if (check(x2-k, x2, y1, y1+k)) return k;
  if (check(x1, x1+k, y2-k, y2)) return k;
  if (check(x2-k, x2, y2-k, y2)) return k;
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}