#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s]++;
  }

  string ans = mp.begin()->first;
  for (auto [k, v] : mp) {
    if (v >= mp[ans]) ans = k;
  }
  cout << ans << " " << mp[ans];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}