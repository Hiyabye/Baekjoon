#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class Coord {
public:
  long long x, y;

  bool operator< (const Coord &rhs) const {
    if (x == rhs.x) return y < rhs.y;
    return x < rhs.x;
  }

  bool operator> (const Coord &rhs) const {
    if (x == rhs.x) return y > rhs.y;
    return x > rhs.x;
  }

  bool operator<= (const Coord &rhs) const {
    if (x == rhs.x) return y <= rhs.y;
    return x <= rhs.x;
  }

  bool operator>= (const Coord &rhs) const {
    if (x == rhs.x) return y >= rhs.y;
    return x >= rhs.x;
  }

  bool operator== (const Coord &rhs) const {
    return x == rhs.x && y == rhs.y;
  }
};

int ccw(Coord a, Coord b, Coord c) {
  long long op = a.x * b.y + b.x * c.y + c.x * a.y - a.y * b.x - b.y * c.x - c.y * a.x;
  return op > 0 ? 1 : op == 0 ? 0 : -1;
}

void intersect(Coord a, Coord b, Coord c, Coord d) {
  cout << "1\n";
  if ((a.x - b.x) * (c.y - d.y) == (a.y - b.y) * (c.x - d.x)) {
    if (b == c && a <= c) cout << b.x << " " << b.y;
    else if (a == d && c <= a) cout << a.x << " " << a.y;
  } else {
    double x = ((double)(a.x * b.y - a.y * b.x) * (c.x - d.x) - (c.x * d.y - c.y * d.x) * (a.x - b.x)) / ((double)(a.x - b.x) * (c.y - d.y) - (a.y - b.y) * (c.x - d.x));
    double y = ((double)(a.x * b.y - a.y * b.x) * (c.y - d.y) - (c.x * d.y - c.y * d.x) * (a.y - b.y)) / ((double)(a.x - b.x) * (c.y - d.y) - (a.y - b.y) * (c.x - d.x));
    cout << fixed << setprecision(16) << x << " " << y;
  }
}

void solve(void) {
  Coord a, b, c, d;
  cin >> a.x >> a.y >> b.x >> b.y;
  cin >> c.x >> c.y >> d.x >> d.y;

  if (ccw(a, b, c) * ccw(a, b, d) == 0 && ccw(c, d, a) * ccw(c, d, b) == 0) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    if (a > d || b < c) cout << "0";
    else intersect(a, b, c, d);
  } else if (ccw(a, b, c) * ccw(a, b, d) <= 0 && ccw(c, d, a) * ccw(c, d, b) <= 0) {
    intersect(a, b, c, d);
  } else {
    cout << "0";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}