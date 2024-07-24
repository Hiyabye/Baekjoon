#include <iostream>
#include <string>
using namespace std;

inline bool digit(char c) {
  return '1' <= c && c <= '9';
}

inline bool upper(char c) {
  return 'A' <= c && c <= 'Z';
}

void solve(void) {
  string s; cin >> s;

  for (int i=0; i<8; i++) {
    if (i != 4 && !digit(s[i])) return;
    if (i == 4 && !upper(s[i])) return;
  }
  if (s[0] == s[1]) cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}