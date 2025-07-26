#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, l; cin >> n >> m >> l;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  int ans = 0, mn = *min_element(t.begin(), t.end());
  for (int i=0; i<n; i++) {
    if (m * t[i] <= (m+1) * mn) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}