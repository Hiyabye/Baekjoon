#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  if (x < 4) cout << (1 << x) << "\n";
  else if (x == 4) cout << 20 << "\n";
  else cout << "frogger\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}