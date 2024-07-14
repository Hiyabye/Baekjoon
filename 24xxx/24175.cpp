#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  map<int, pair<int, int>> mp;
  while (n--) {
    int y; string s, m; cin >> y >> s >> m;
    if (m == "Gold") mp[y].first++;
    mp[y].second++;
  }

  int ans1 = 0, cnt1 = 0;
  for (auto [k, v] : mp) {
    if (v.first > cnt1) {
      ans1 = k;
      cnt1 = v.first;
    }
  }

  int ans2 = 0, cnt2 = 0;
  for (auto [k, v] : mp) {
    if (v.second > cnt2) {
      ans2 = k;
      cnt2 = v.second;
    }
  }

  cout << ans1 << " " << ans2 << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}