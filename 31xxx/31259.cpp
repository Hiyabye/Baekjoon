#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v; string s;
  while (getline(cin, s)) v.push_back(s);

  unordered_map<char, int> mp;
  for (const string &s : v) for (char c : s) {
    if ('a' <= c && c <= 'z') mp[c-'a'+'A']++;
    else if ('A' <= c && c <= 'Z') mp[c]++;
  }

  int mx = 0;
  for (auto [_, v] : mp) mx = max(mx, v);
  for (int i=mx; i>0; i--) {
    for (char c='A'; c<='Z'; c++) {
      cout << (mp[c] >= i ? c : ' ');
    }
    cout << "\n";
  }
  cout << "--------------------------\n";
  cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}