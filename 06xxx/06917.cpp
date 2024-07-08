#include <iostream>
#include <string>
using namespace std;

inline bool check(char c) {
  return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y';
}

bool solve(void) {
  string s; cin >> s;
  if (s == "quit!") return false;

  if (s.length() > 4 && s.substr(s.length()-2) == "or" && check(s[s.length()-3])) {
    s.pop_back(); s += "ur";
  }
  cout << s << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}