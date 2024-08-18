#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];
  sort(l.begin(), l.end());

  int ans = max(l[1] - l[0], l[n-1] - l[n-2]);
  for (int i=2; i<n; i++) {
    ans = max(ans, l[i] - l[i-2]);
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