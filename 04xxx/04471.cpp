#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

typedef struct {
  string name;
  double x, y, z;
} Point;

inline double dist(const Point &a, const Point &b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

void solve(void) {
  Point a, b;
  getline(cin, a.name); cin >> a.x >> a.y >> a.z; cin.ignore();
  getline(cin, b.name); cin >> b.x >> b.y >> b.z; cin.ignore();

  cout << a.name << " to " << b.name << ": " << fixed << setprecision(2) << dist(a, b) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}