#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, l, f; cin >> n >> l >> f;
  unordered_map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s.substr(l-f)]++;
  }

  int ans = 0;
  for (auto &[_, v] : mp) ans += v / 2;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}