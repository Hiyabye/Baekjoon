#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x; cin >> x;

  vector<int> f(21), g(21);
  f[0] = 1; f[1] = 2;
  for (int i=2; i<=20; i++) f[i] = f[i-1] + f[i-2];
  for (int i=20; i>=0; i--) {
    g[i] = x / f[i];
    x %= f[i];
  }

  int ans = 0;
  for (int i=1; i<=20; i++) {
    ans += f[i-1] * g[i];
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