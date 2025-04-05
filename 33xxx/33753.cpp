#include <iostream>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int t; cin >> t;

  int ans = a; t -= 30;
  while (t > 0) {
    t -= b;
    ans += c;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}