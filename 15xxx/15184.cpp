#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  unordered_map<char, int> mp;
  for (char &c : s) {
    if ('a' <= c && c <= 'z') c = c - 'a' + 'A';
    mp[c]++;
  }

  for (char c='A'; c<='Z'; c++) {
    cout << c << " | ";
    for (int i=0; i<mp[c]; i++) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}