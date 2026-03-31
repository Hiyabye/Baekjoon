#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

inline int calc(int n, int x, int y) {
  int d = abs(x - y);
  return min(d, n - d);
}

void solve(void) {
  int n; cin >> n;
  int a, b, c; cin >> a >> b >> c;
  int p, q; cin >> p >> q;

  cout << calc(n, calc(n, a, c) == b ? c : n-c, calc(n, a, p) == q ? p : n-p);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}