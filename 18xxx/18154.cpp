#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n), d(n);
  for (int i=0; i<n; i++) cin >> t[i] >> d[i];

  int ans = 0;
  for (int i=1; i<n; i++) {
    ans = max(ans, (d[i] - d[i-1]) / (t[i] - t[i-1]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}