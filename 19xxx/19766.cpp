#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, t; cin >> n >> k >> t;
  vector<int> z(n), s(n);
  for (int i=0; i<n; i++) cin >> z[i];
  for (int i=0; i<n; i++) cin >> s[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += z[i];
    if (s[i] > ans + k) ans += k;
    else ans = max(ans, s[i]) + t;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}