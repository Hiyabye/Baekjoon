#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  string t; cin >> t;

  unordered_map<char, int> cnt;
  for (char c : s) cnt[c]--;
  for (char c : t) cnt[c]++;

  int ans = 0;
  for (auto [_, v] : cnt) {
    if (v > 0) ans += v;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}