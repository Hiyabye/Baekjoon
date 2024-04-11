#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<int, int> mp;
  while (n--) {
    int x, y; cin >> x >> y;
    mp[y]++;
  }

  int ans = 0;
  for (auto it : mp) ans = max(ans, it.second);
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}