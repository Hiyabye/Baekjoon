#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int l, r; cin >> l >> r;

  if (l == 0 && r == 0) cout << "Not a moose";
  else if (l != r) cout << "Odd " << max(l, r) * 2;
  else cout << "Even " << l * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}