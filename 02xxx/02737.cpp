#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n; n--;

  int ans = 0;
  for (int i=2; n>=i; i++) {
    n -= i;
    if (!(n % i)) ans++;
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