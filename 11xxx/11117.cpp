#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline bool check(unordered_map<char, int> mp, const string &s) {
  for (char c : s) mp[c]--;
  for (const auto &p : mp) {
    if (p.second < 0) return false;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;
  unordered_map<char, int> mp;
  for (char c : s) mp[c]++;

  int w; cin >> w;
  while (w--) {
    string s; cin >> s;
    cout << (check(mp, s) ? "YES" : "NO") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}