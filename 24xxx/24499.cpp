#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(2*n);
  for (int i=0; i<n; i++) cin >> a[i], a[i+n] = a[i];

  int cur = 0;
  for (int i=0; i<k; i++) {
    cur += a[i];
  }

  int ans = cur;
  for (int i=k; i<2*n; i++) {
    cur += a[i] - a[i-k];
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}