#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &s) {
  string ret = "";
  for (int i=0; i<s.length(); i+=2) {
    for (char c='0'; c<s[i]; c++) ret += s[i+1];
  }
  return ret;
}

void solve(void) {
  int k, pos; cin >> k >> pos;
  string s; cin >> s;

  while (k--) s = calc(s);
  cout << s[pos];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}