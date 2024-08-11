#include <iostream>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;

  if (x - y != 0 && x - y != 2) {
    cout << "No Number\n";
  } else {
    cout << x + y - (x & 1) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}