#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  int ans = 0, mx = w[0];
  for (int i=1; i<n; i++) {
    mx = max(mx, w[i]);
    ans = max(ans, mx - w[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}