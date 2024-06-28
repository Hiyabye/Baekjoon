#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<n; i++) ans += v[i] / k;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}