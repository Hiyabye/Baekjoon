#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  string t; getline(cin, t);

  unordered_map<char, char> mp;
  for (int i=0; i<26; i++) {
    mp['a'+i] = s[i];
    mp['A'+i] = s[i] - 'a' + 'A';
  }
  mp[' '] = ' ';

  for (char c : t) {
    cout << mp[c];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}