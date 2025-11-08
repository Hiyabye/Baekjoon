#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  int x = 366 + m / 50 * 12;
  cout << setw(2) << setfill('0') << x / 60 << ":"
       << setw(2) << setfill('0') << x % 60 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}