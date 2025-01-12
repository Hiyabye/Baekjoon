#include <iostream>
using namespace std;

void solve(void) {
  double a, m; cin >> a >> m;

  cout << (int)(a * m * 0.00176) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}