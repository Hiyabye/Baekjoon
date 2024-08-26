#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Rect {
  int x1, y1, x2, y2;
  Rect(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}
};

struct Circle {
  int x, y, r;
  Circle(int x, int y, int r) : x(x), y(y), r(r) {}
};

inline int calc(const vector<Rect> &a, const vector<Circle> &b, int x, int y) {
  int ret = 0;
  for (const Rect &r : a) {
    if (r.x1 <= x && x <= r.x2 && r.y1 <= y && y <= r.y2) ret++;
  }
  for (const Circle &c : b) {
    if ((c.x-x)*(c.x-x) + (c.y-y)*(c.y-y) <= c.r*c.r) ret++;
  }
  return ret;
}

void solve(void) {
  vector<Rect> a;
  vector<Circle> b;

  int m; cin >> m;
  while (m--) {
    string s; cin >> s;
    if (s == "rectangle") {
      int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
      a.push_back(Rect(x1, y1, x2, y2));
    } else {
      int x, y, r; cin >> x >> y >> r;
      b.push_back(Circle(x, y, r));
    }
  }

  int n; cin >> n;
  while (n--) {
    int x, y; cin >> x >> y;
    cout << calc(a, b, x, y) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}