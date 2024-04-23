#include <iostream>
using namespace std;

void solve(void) {
  int n, c; cin >> n >> c;

  int a = n, b = n;
  while (c--) {
    int x, y; cin >> x >> y;
    if (x >= a || y >= b) continue;
    if (x * b >= a * y) a = x;
    else b = y;
  }
  cout << a * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}