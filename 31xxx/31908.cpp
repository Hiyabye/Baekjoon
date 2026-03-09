#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, vector<string>> mp;
  while (n--) {
    string p, s; cin >> p >> s;
    if (s != "-") mp[s].push_back(p);
  }

  vector<string> ans;
  for (const auto &[_, v] : mp) {
    if (v.size() != 2) continue;
    ans.push_back(v[0] + " " + v[1]);
  }

  cout << ans.size() << "\n";
  for (const auto &s : ans) cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}