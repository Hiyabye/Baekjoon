#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Coord {
  int x, y;
  int idx;
};

bool cmp(const Coord &a, const Coord &b) {
  return a.x + a.y < b.x + b.y;
}

void solve(void) {
  int n; cin >> n;
  vector<Coord> v(3*n);
  for (int i=0; i<3*n; i++) cin >> v[i].x >> v[i].y, v[i].idx = i+1;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<3*n; i+=3) {
    cout << v[i].idx << " " << v[i+1].idx << " " << v[i+2].idx << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}