#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  int ans = 0;
  while (k--) {
    int x; cin >> x;
    ans += (x & 1) ? x : -x;
  }
  cout << ((ans > 0) ? "ODD" : (ans < 0) ? "EVEN" : "TIE") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}