#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n), u(n);
  for (int i=0; i<n; i++) cin >> v[i];
  for (int i=0; i<n; i++) cin >> u[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (v[i] != u[i]) ans++;
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