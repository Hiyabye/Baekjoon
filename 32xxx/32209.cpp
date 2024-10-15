#include <iostream>
using namespace std;

void solve(void) {
  int q; cin >> q;

  int cnt = 0;
  bool ans = true;

  while (q--) {
    int x, y; cin >> x >> y;
    if (x == 1) cnt += y;
    else cnt -= y;
    if (cnt < 0) ans = false;
  }
  cout << (ans ? "See you next month" : "Adios");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}