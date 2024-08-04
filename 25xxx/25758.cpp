#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s]++;
  }

  set<char> ans;
  for (const auto &[k, v] : mp) if (v > 1) ans.insert(max(k.front(), k.back()));
  for (const auto &[k1, _] : mp) for (const auto &[k2, _] : mp) {
    if (k1 == k2) continue;
    ans.insert(max(k1.front(), k2.back()));
    if (ans.size() == 26) break;
  }

  cout << ans.size() << "\n";
  for (const char &c : ans) cout << c << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}