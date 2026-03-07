#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

inline bool cmp(const pair<string, int> &a, const pair<string, int> &b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; int x; cin >> s >> x;
    mp[s] += x;
  }

  vector<pair<string, int>> ans;
  for (auto &[s, x] : mp) {
    ans.emplace_back(s, x);
  }
  sort(ans.begin(), ans.end(), cmp);

  cout << ans.size() << "\n";
  for (auto &[s, x] : ans) {
    cout << s << " " << x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}