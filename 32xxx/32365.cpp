#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  unordered_map<char, int> mp;
  for (char c : s) mp[c]++;

  for (int i=1; i<s.length(); i++) {
    if ((mp[s[i-1]] > 1) == (mp[s[i]] > 1)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n; cin >> t >> n;
  while (t--) cout << (solve() ? 'T' : 'F') << "\n";
  return 0;
}