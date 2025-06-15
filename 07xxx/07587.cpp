#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  map<string, vector<string>> mp;
  while (n--) {
    string s, t; cin >> s; t = s;
    sort(s.begin(), s.end());
    mp[s].push_back(t);
  }

  int mx = 0;
  for (auto &[_, v] : mp) {
    mx = max(mx, (int)v.size());
  }

  string ans = "";
  for (auto &[_, v] : mp) {
    if (mx != (int)v.size()) continue;
    if (ans.empty()) ans = v[0];
    else ans = min(ans, v[0]);
  }
  cout << ans << " " << mx-1 << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}