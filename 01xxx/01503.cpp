#include <cmath>
#include <iostream>
#include <set>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  set<int> s;
  while (m--) {
    int x; cin >> x;
    s.insert(x);
  }

  int ans = 1e9;
  for (int x=1; x<=1001; x++) {
    if (s.count(x)) continue;
    for (int y=1; y<=1001; y++) {
      if (s.count(y)) continue;
      for (int z=1; z<=1001; z++) {
        if (s.count(z)) continue;
        if (abs(n-x*y*z) < ans) ans = abs(n-x*y*z);
        if (x*y*z > n) break;
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}