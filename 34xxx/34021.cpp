#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, l; cin >> n >> m >> l;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  int ans = l;
  for (int i=0; i<n; i++) {
    if (s[i] == -1) continue;
    ans = max(ans, m-s[i]);
  }
  cout << "The scoreboard has been frozen with " << ans << " minute" << (ans > 1 ? "s" : "") << " remaining.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}