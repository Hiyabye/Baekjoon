#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; char c; cin >> n >> c;
  string s; cin >> s;

  unordered_map<char, int> mp;
  for (char ch : s) mp[ch]++;
  int mx = 0; char key;
  for (auto [k, v] : mp) {
    if (v > mx) mx = v, key = k;
  }

  for (char ch : s) {
    int d = 26 - (key - c + 26) % 26;
    cout << (char)('A' + (ch - 'A' + d) % 26);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}