#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  cin.ignore();

  unordered_map<char, int> mp;
  while (n--) {
    string s; getline(cin, s);
    for (char c : s) mp[c]++;
  }

  for (char c='a'; c<='z'; c++) {
    if (mp[c]) cout << c << " " << mp[c] << "\n";
  }
  for (char c='A'; c<='Z'; c++) {
    if (mp[c]) cout << c << " " << mp[c] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}