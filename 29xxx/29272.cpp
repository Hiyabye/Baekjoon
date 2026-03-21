#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    mp[a]++; mp[b]++;
  }

  int ans = 1e9;
  for (const auto &[_, v] : mp) {
    ans = min(ans, n - v);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}