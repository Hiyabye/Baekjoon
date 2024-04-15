#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, t; cin >> n >> t;
  int m; cin >> m;
  int x, y; cin >> x >> y;

  cout << max((x*(n-m) + y*m + x*y*60 - 1) / (x*y*60) - t, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}