#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int j, n; cin >> j >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) {
    int r, c; cin >> r >> c;
    v[i] = r * c;
  }
  sort(v.begin(), v.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (j <= 0) break;
    j -= v[i];
    ans++;
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