#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  long long x, y, z;
} Point;

long long dist(const Point &a, const Point &b) {
  long long dx = a.x - b.x;
  long long dy = a.y - b.y;
  long long dz = a.z - b.z;
  return dx * dx + dy * dy + dz * dz;
}

int query(int n, const vector<Point> &v, Point p, long long r) {
  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (dist(v[i], p) <= r * r) cnt++;
  }
  return cnt;
}

void solve(void) {
  int n; cin >> n;
  vector<Point> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y >> v[i].z;

  int m; cin >> m;
  while (m--) {
    Point p; long long r;
    cin >> p.x >> p.y >> p.z >> r;
    cout << query(n, v, p, r) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}