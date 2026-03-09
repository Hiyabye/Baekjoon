#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, pair<string, string>> mp;
  for (int i=0; i<n; i++) {
    string s, t; cin >> s >> t;
    mp[s].first = t;
  }
  for (int i=0; i<n; i++) {
    string s, t; cin >> s >> t;
    mp[s].second = t;
  }

  for (const auto &[_, p] : mp) {
    cout << p.first << " " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}