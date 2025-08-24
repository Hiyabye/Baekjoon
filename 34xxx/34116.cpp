#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = -1e9, b = 1e9, c = -1e9, d = 1e9, e = -1e9, f = 1e9;
  while (n--) {
    int x, y; cin >> x >> y;
    a = max(a, x+y); b = min(b, x+y);
    c = max(c, y-x); d = min(d, y-x);
    e = max(e, y); f = min(f, y);
  }
  cout << min(a+c-f*2, e*2-b-d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}