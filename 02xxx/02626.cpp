#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
#define LEARNING_RATE 0.1
#define EPOCHS 100000
#define DECAY 0.999
using namespace std;

typedef struct Point {
  long double x, y;
  Point(void) : x(0), y(0) {}
  Point(long double x, long double y) : x(x), y(y) {}
} Point;

inline long double dist(const Point& a, const Point& b) {
  return sqrtl((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void solve(void) {
  int n; cin >> n;
  vector<Point> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y;

  Point ans(0, 0);
  for (const auto& p : v) ans.x += p.x, ans.y += p.y;
  ans.x /= n, ans.y /= n;

  long double delta = LEARNING_RATE, r = 0;
  for (int i=0; i<EPOCHS; i++) {
    int idx = 0;
    r = 0;
    for (int j=0; j<n; j++) {
      long double d = dist(ans, v[j]);
      if (d > r) r = d, idx = j;
    }
    ans.x += (v[idx].x - ans.x) * delta;
    ans.y += (v[idx].y - ans.y) * delta;
    delta *= DECAY;
  }
  
  if (abs(ans.x) < 1e-9) ans.x = 0;
  if (abs(ans.y) < 1e-9) ans.y = 0;
  if (abs(r) < 1e-9) r = 0;
  cout << fixed << setprecision(3) << ans.x << " " << ans.y << "\n" << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}