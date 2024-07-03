#include <iostream>
#include <string>
using namespace std;

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  string ans = "not possible";
  for (int i=0; i<s.length(); i++) {
    string t = s.substr(0, i) + s.substr(i+1);
    if (palindrome(t)) {
      ans = t;
      break;
    }
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}