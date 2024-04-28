#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

typedef struct {
  int x, y;
} Point;

void solve(void) {
  int n; cin >> n;
  Point a; cin >> a.x >> a.y; n--;

  Point b; cin >> b.x >> b.y; n--;
  while (n--) {
    Point c; cin >> c.x >> c.y;
    if (hypot(a.x-b.x, a.y-b.y) > hypot(a.x-c.x, a.y-c.y)) b = c;
  }

  cout << a.x << " " << a.y << "\n";
  cout << b.x << " " << b.y << "\n";
  cout << fixed << setprecision(2) << hypot(a.x-b.x, a.y-b.y);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}