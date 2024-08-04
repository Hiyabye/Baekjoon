#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<int, long long> mp;
  while (n--) {
    int x, t, c; cin >> x >> t >> c;
    mp[t - x] += c;
  }

  long long ans = 0;
  for (auto [_, v] : mp) {
    ans = max(ans, v);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}