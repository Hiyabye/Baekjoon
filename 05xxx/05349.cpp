#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<string, bool> mp;
  string s; cin >> s;
  while (s != "000-00-0000") {
    if (mp.find(s) != mp.end()) mp[s] = true;
    else mp[s] = false;
    cin >> s;
  }

  for (auto &p : mp) {
    if (p.second) cout << p.first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}