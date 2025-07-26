#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = -1e9, b = 1e9, c = -1e9, d = 1e9;
  while (n--) {
    int x, y; cin >> x >> y;
    a = max(a, x+y);
    b = min(b, x+y);
    c = max(c, x-y);
    d = min(d, x-y);
  }
  cout << max(a-b, c-d);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}