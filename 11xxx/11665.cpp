#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

typedef struct Point {
  int x, y, z;
  Point(int x=0, int y=0, int z=0): x(x), y(y), z(z) {}
} Point;

void solve(void) {
  int n; cin >> n;

  pair<Point, Point> box = make_pair(Point(1, 1, 1), Point(1000, 1000, 1000));
  for (int i=0; i<n; i++) {
    Point a, b; cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z;
    box.first.x = max(box.first.x, a.x);
    box.first.y = max(box.first.y, a.y);
    box.first.z = max(box.first.z, a.z);
    box.second.x = min(box.second.x, b.x);
    box.second.y = min(box.second.y, b.y);
    box.second.z = min(box.second.z, b.z);
  }

  int dx = box.second.x - box.first.x;
  int dy = box.second.y - box.first.y;
  int dz = box.second.z - box.first.z;
  int volume = dx * dy * dz;
  if (dx < 0 || dy < 0 || dz < 0) volume = 0;
  cout << volume << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}