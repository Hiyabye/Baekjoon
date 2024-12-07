#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  int inner = (b - a + 43) % 43;
  int outer = (a - b + 43) % 43;

  if (inner < outer) cout << "Inner circle line";
  else if (inner > outer) cout << "Outer circle line";
  else cout << "Same";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}