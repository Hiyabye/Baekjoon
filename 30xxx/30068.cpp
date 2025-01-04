#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  unordered_map<int, int> mp;

  vector<pair<int, int>> ans;
  while (m--) {
    int t, n; cin >> t >> n;
    if (mp.find(n) == mp.end()) {
      mp[n] = t;
    } else {
      ans.push_back({n, t - mp[n]});
    }
  }

  for (auto [k, v] : ans) {
    cout << k << " " << v << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}