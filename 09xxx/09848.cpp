#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  int ans = 0;
  for (int i=1; i<n; i++) {
    if (t[i-1] - t[i] >= k) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}