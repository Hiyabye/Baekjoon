#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, map<char, int>> mp;
  while (n--) {
    string s; cin >> s;
    for (int i=0; i<s.length(); i++) {
      mp[i+1][s[i]]++;
    }
  }

  for (auto [k, v] : mp) {
    cout << k << ":";
    int mx = 0;
    for (auto [_, cnt] : v) mx = max(mx, cnt);
    for (auto [c, cnt] : v) {
      if (cnt == mx) cout << " " << c;
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}