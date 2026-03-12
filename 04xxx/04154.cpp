#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  if (s == "") return false;

  for (int i=0; i<s.length(); i++) {
    if (s[i] == ' ') s.erase(i--, 1);
  }

  for (int i=1; i<=s.length(); i++) {
    unordered_map<string, int> mp;
    for (int j=0; j<s.length(); j++) {
      if (j < i-1) continue;
      mp[s.substr(j-i+1, i)]++;
    }
    int mx = 0;
    for (const auto &[_, cnt] : mp) {
      mx = max(mx, cnt);
    }
    if (mx > 1) cout << mx << "\n";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}