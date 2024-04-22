#include <iostream>
using namespace std;

void solve(void) {
  int n, l, d; cin >> n >> l >> d;

  int ans = 0, t = 0;
  for (int i=0; i<n; i++) {
    t += l;
    while (ans < t) ans += d;
    if (t <= ans && ans < t + 5) break;
    t += 5;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}