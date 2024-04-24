#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  for (int i=0; i<s.length(); i++) {
    if (vowel(s[0])) break;
    s += s[0];
    s.erase(0, 1);
  }
  cout << s << "ay\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}