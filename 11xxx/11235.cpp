#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s]++;
  }

  int mx = 0;
  for (const auto &[_, v] : mp) {
    mx = max(mx, v);
  }

  set<string> ans;
  for (const auto &[k, v] : mp) {
    if (v == mx) ans.insert(k);
  }
  for (const auto &s : ans) {
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}