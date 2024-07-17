#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 100, b = 100, c = 0, d = 0;
  while (n--) {
    int x, y; char tmp; cin >> x >> tmp >> y;
    a = min(a, x); b = min(b, y);
    c = max(c, x); d = max(d, y);
  }
  cout << a-1 << "," << b-1 << "\n" << c+1 << "," << d+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}