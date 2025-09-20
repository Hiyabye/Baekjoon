#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  int a = 0, b = 1e9, c = 0, d = 1e9;
  while (m--) {
    int s; cin >> s;
    int sum = 0;
    while (s--) {
      int x; cin >> x;
      a = max(a, x);
      b = min(b, x);
      sum += x;
    }
    c = max(c, sum);
    d = min(d, sum);
  }
  cout << a << "\n" << b << "\n" << c << "\n" << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}