#include <algorithm>
#include <cmath>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int m; cin >> m;

  unordered_map<int, int> mp;
  for (int i=1; i<=cbrt(m)+1; i++) for (int j=i; j<=cbrt(m)+1; j++) {
    int x = i*i*i + j*j*j;
    if (x <= m) mp[x]++;
  }

  int ans = -1;
  for (const auto &[k, v] : mp) {
    if (v >= 2) ans = max(ans, k);
  }
  
  if (~ans) cout << ans << "\n";
  else cout << "none\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}