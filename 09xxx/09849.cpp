#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = -1e9, b = 1e9, c = -1e9, d = 1e9;
  while (n--) {
    int x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
    a = max(a, x1);
    b = min(b, x2);
    c = max(c, y1);
    d = min(d, y2);
  }
  cout << max(0, b-a) * max(0, d-c);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}