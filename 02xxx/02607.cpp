#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline bool check(const string &s, const string &t) {
  unordered_map<char, int> mp;
  for (char c : s) mp[c]++;
  for (char c : t) mp[c]--;

  int cnt = 0;
  for (auto &[_, v] : mp) cnt += abs(v);
  if (cnt > 2) return false;
  if (cnt < 2) return true;
  bool a = false, b = false;
  for (auto &[_, v] : mp) {
    if (v == 1) a = true;
    if (v == -1) b = true;
  }
  return a && b;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  while (--n) {
    string t; cin >> t;
    if (check(s, t)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}