#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int d, e, f; cin >> d >> e >> f;

  cout << a + b + c + d + e + f - min(max({a, b, c}), max({d, e, f})) * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}