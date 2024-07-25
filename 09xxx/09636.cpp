#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; cin >> s;

  unordered_map<char, int> mp;
  for (char c : s) {
    mp[c]++;
  }

  cout << mp['R'] - mp['L'] - mp['?'] << " "
       << mp['U'] - mp['D'] - mp['?'] << " "
       << mp['R'] - mp['L'] + mp['?'] << " "
       << mp['U'] - mp['D'] + mp['?'] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}