#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int x, y;
} Point;

double dist(const Point &a, const Point &b) {
  if (a.x == b.x) return abs(a.y - b.y);
  if (a.y == b.y) return abs(a.x - b.x);
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void solve(void) {
  vector<Point> v(4);
  for (int i=0; i<4; i++) cin >> v[i].x >> v[i].y;

  double min_dist = 1e9;
  for (int i=1; i<4; i++) for (int j=1; j<4; j++) for (int k=1; k<4; k++) {
    if (i == j || j == k || k == i) continue;
    Point a = v[i], b = v[j], c = v[k];
    double d = dist(v[0], a) + dist(a, b) + dist(b, c);
    min_dist = min(min_dist, d);
  }
  cout << (int)min_dist << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}