#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int x, y;
} Point;

bool solve(void) {
  int n, d; cin >> n >> d;
  vector<Point> p, q;
  while (n--) {
    Point r; int t; cin >> r.x >> r.y >> t;
    if (t) p.push_back(r);
    else q.push_back(r);
  }

  for (const Point &a : p) for (const Point &b : q) {
    if (hypot(a.x-b.x, a.y-b.y) == d) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}