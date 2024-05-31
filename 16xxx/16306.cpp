#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int v; cin >> v;

  int ans = 1e9;
  for (int i=1; i*i*i<=v; i++) {
    if (v % i) continue;
    for (int j=1; i*j*j<=v; j++) {
      if ((v / i) % j) continue;
      ans = min(ans, 2 * (v / i + v / j + i * j));
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}