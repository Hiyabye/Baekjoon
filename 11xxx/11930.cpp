#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

struct Coord {
  double x, y, z;
};

inline double dist(const Coord &a, const Coord &b) {
  return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2) + pow(a.z-b.z, 2));
}

void solve(void) {
  int n; cin >> n;
  vector<Coord> v(n);
  for (int i=0; i<n; i++) cin >> v[i].x >> v[i].y >> v[i].z;

  Coord ans = {0, 0, 0};
  for (const auto &p : v) {
    ans.x += p.x / n;
    ans.y += p.y / n;
    ans.z += p.z / n;
  }

  double delta = 0.1, r = 0;
  for (int i=0; i<100000; i++) {
    int idx = 0; r = 0;
    for (int j=0; j<n; j++) {
      double d = dist(ans, v[j]);
      if (d > r) r = d, idx = j;
    }
    ans.x += (v[idx].x - ans.x) * delta;
    ans.y += (v[idx].y - ans.y) * delta;
    ans.z += (v[idx].z - ans.z) * delta;
    delta *= 0.999;
  }
  cout << fixed << setprecision(2) << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}