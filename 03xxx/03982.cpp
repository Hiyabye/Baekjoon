#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  unordered_map<string, int> mp;
  for (int i=0; i<16; i++) {
    string t1, t2; int g1, g2; cin >> t1 >> t2 >> g1 >> g2;
    if (g1 > g2) mp[t1]++;
    else if (g1 < g2) mp[t2]++;
  }

  string ans = mp.begin()->first;
  for (const auto &[k, v] : mp) {
    if (v > mp[ans]) ans = k;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  while (c--) solve();
  return 0;
}