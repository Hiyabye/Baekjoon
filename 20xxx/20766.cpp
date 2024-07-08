#include <iostream>
#include <string>
using namespace std;

inline bool check(char c) {
  return c == ':' || c == '-';
}

void solve(void) {
  string s; getline(cin, s);

  for (int i=0; i<s.length(); i++) {
    if (!check(s[i])) continue;
    if (i+1 < s.length() && s[i+1] != ' ') s.insert(i+1, " ");
    if (i-1 >= 0 && s[i-1] != ' ') s.insert(i, " ");
  }
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}