#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  cout << a << " " << b << " " << c << "\n";

  int ans = 0;
  for (int i=1; i<a; i++) {
    if (i % b == 0 || i % c == 0) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}