#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  unordered_set<int> s;
  while (k--) {
    int id; cin >> id;
    s.insert(id);
  }
  int n; cin >> n;

  vector<pair<int, int>> v;
  while (n--) {
    int id, h, m; cin >> id >> h >> m;
    if (s.find(id) == s.end()) continue;
    if (h == -1 && m == -1) continue;
    v.push_back({h*60+m, id});
  }

  int ans = 0;
  for (auto [t, _] : v) {
    if (t <= 360) ans++;
  }
  cout << min_element(v.begin(), v.end())->second << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}