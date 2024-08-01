#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s, e, q; cin >> s >> e >> q;

  string a, b;
  unordered_map<string, int> mp;
  while (cin >> a >> b) {
    if (a <= s) {
      mp[b] = 1;
    } else if (e <= a && a <= q && mp[b] == 1) {
      mp[b] = 2;
    }
  }

  int ans = 0;
  for (auto [_, v] : mp) {
    if (v == 2) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}