#include <iostream>
using namespace std;

void solve(void) {
  int t; cin >> t;

  int ans = 0;
  while (t--) {
    double a, b, c, d; cin >> a >> b >> c >> d;
    if ((a > 56 || b > 45 || c > 25) && a + b + c > 125) cout << 0;
    else if (d > 7) cout << 0;
    else cout << 1, ans++;
    cout << "\n";
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}