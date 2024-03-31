#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool one(const string &s) {
  for (char c : s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
  }
  return false;
}

bool two(const string &s) {
  vector<bool> v(s.length());
  for (int i=0; i<s.length(); i++) {
    v[i] = s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u';
  }

  for (int i=2; i<s.length(); i++) {
    if (v[i] == v[i-1] && v[i-1] == v[i-2]) return false;
  }
  return true;
}

bool three(const string &s) {
  for (int i=1; i<s.length(); i++) {
    if (s[i] == 'e' || s[i] == 'o') continue;
    if (s[i] == s[i-1]) return false;
  }
  return true;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "end") return false;

  cout << "<" << s << "> is " << (one(s) && two(s) && three(s) ? "" : "not ") << "acceptable.\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}