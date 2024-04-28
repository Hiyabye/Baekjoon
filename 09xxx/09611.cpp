#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  long long x, y;
} Point;

long long dist(const Point &a, const Point &b) {
  return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int calc(int n, vector<Point> &p, int cur, long long dv) {
  int ret = 0;
  for (int i=0; i<n; i++) {
    if (i == cur) continue;
    if (dist(p[cur], p[i]) <= dv * dv) ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<Point> p(n);
  for (int i=0; i<n; i++) cin >> p[i].x >> p[i].y;

  int t; cin >> t;
  while (t--) {
    int i, dv; cin >> i >> dv; i--;
    cout << calc(n, p, i, dv) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}