#include <iostream>
using namespace std;

void solve(void) {
  int p, q; cin >> p >> q;
  int a, b; cin >> a >> b;

  if (q <= p) cout << q * a;
  else cout << p * a + (q - p) * b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}