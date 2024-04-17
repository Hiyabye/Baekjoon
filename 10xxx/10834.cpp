#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  int c = 0, d = 1;
  while (m--) {
    int a, b, s; cin >> a >> b >> s;
    c ^= s;
    d = d / a * b;
  }
  cout << c << " " << d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}