#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, l, k; cin >> n >> l >> k;
  vector<int> r(n);
  for (int i=0; i<n; i++) cin >> r[i];
  sort(r.begin(), r.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (r[i] > l) continue;
    l += k;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}