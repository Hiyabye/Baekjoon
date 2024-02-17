#include <cmath>
#include <iostream>
using namespace std;

int score(double r) {
  for (int i=1; i<=10; i++) {
    if (r <= 20*i) return 11-i;
  }
  return 0;
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    ans += score(hypot(x, y));
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