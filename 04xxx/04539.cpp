#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  int base = 10;
  while (x >= base) {
    if (x % base >= base / 2) x = (x / base + 1) * base;
    else x = (x / base) * base;
    base *= 10;
  }
  cout << x << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}