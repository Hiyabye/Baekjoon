#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  vector<int> v(n+1, 0);
  for (int i=2; i<=n; i++) {
    if (v[i]) continue;
    for (int j=i; j<=n; j+=i) v[j] = max(v[j], i);
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (v[i] <= k) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}