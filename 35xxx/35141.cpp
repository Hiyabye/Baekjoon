#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  map<char, int> mp;
  for (char c : s) mp[c]++;

  vector<string> ans;
  for (const auto &[c, cnt] : mp) {
    if (cnt % 2 == 0) continue;
    ans.push_back(string(cnt, c));
  }
  for (const auto &[c, cnt] : mp) {
    if (cnt % 2 == 1) continue;
    if (ans.empty()) ans.push_back(string(cnt, c));
    else ans[0] = string(cnt / 2, c) + ans[0] + string(cnt / 2, c);
  }

  cout << ans.size() << "\n";
  for (const string &t : ans) {
    cout << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}