#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int ta, tb, va, vb; cin >> ta >> tb >> va >> vb;

  int ans = 1e9;
  for (int i=0; i<=va; i++) {
    ans = min(ans, max((va-i)*ta, vb*tb+i*ta));
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}