#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

inline int calc(char c) {
  return (1 << 0) * (c == 'b') +
         (1 << 1) * (c == 'g') +
         (1 << 2) * (c == 'r') +
         (1 << 3) * (c == 'y');
}

bool solve(void) {
  int m; cin >> m;

  unordered_map<int, int> mp;
  while (m--) {
    string s; cin >> s;
    mp[stoi(s.substr(0, s.length()-1))] |= calc(s.back());
  }

  for (int i=1; i<=100; i++) {
    if (__builtin_popcount(mp[i]) >= 3) return true;
  }
  for (int i=3; i<=100; i++) {
    if (mp[i-2] & mp[i-1] & mp[i]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}