#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

typedef struct Point {
  double x, y;
  Point(void) : x(0), y(0) {}
  Point(double x, double y) : x(x), y(y) {}
} Point;

inline double dist(const Point& a, const Point& b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

inline Point circle(const Point& a, const Point& b, const Point& c) {
  return Point(
    ((b.x*b.x-c.x*c.x+b.y*b.y-c.y*c.y)*(a.y-b.y)-(b.x*b.x-a.x*a.x+b.y*b.y-a.y*a.y)*(c.y-b.y)) / (2*(a.x-b.x)*(c.y-b.y)-2*(c.x-b.x)*(a.y-b.y)),
    ((b.y*b.y-c.y*c.y+b.x*b.x-c.x*c.x)*(a.x-b.x)-(b.y*b.y-a.y*a.y+b.x*b.x-a.x*a.x)*(c.x-b.x)) / (2*(a.y-b.y)*(c.x-b.x)-2*(c.y-b.y)*(a.x-b.x))
  );
}

bool check(const Point& mid, const vector<Point>& v, double r) {
  for (const auto& p : v) {
    if (dist(mid, p) > r) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<Point> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y;

  pair<Point, double> ans = make_pair(Point(0, 0), 1e9);
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      Point mid((v[i].x + v[j].x) / 2, (v[i].y + v[j].y) / 2);
      double r = dist(v[i], mid);
      if (r < ans.second && check(mid, v, r)) ans = make_pair(mid, r);
    }
  }

  for (int i=0; i<n-2; i++) {
    for (int j=i+1; j<n-1; j++) {
      for (int k=j+1; k<n; k++) {
        if ((v[i].x - v[j].x) * (v[k].y - v[j].y) == (v[k].x - v[j].x) * (v[i].y - v[j].y)) continue;
        Point mid = circle(v[i], v[j], v[k]);
        double r = dist(v[i], mid);
        if (r < ans.second && check(mid, v, r)) ans = make_pair(mid, r);
      }
    }
  }
  cout << fixed << setprecision(4) << ans.first.x << " " << ans.first.y << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}