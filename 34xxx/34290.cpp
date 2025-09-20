#include <iostream>
#include <string>
using namespace std;

inline string spread(const string &s) {
  string t = "";
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'W') t += 'W';
    else if (s[i] == 'I' || (i > 0 && s[i-1] == 'I') || (i+1 < s.length() && s[i+1] == 'I')) t += 'I';
    else t += 'H';
  }
  return t;
}

inline bool check(const string &s) {
  for (const char &c : s) {
    if (c == 'H') return false;
  }
  return true;
}

bool solve(void) {
  int p, t; cin >> p >> t;
  string s; cin >> s;

  for (int i=p; i<t; i+=p) {
    s = spread(s);
    if (check(s)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "CURED" : "ALL INFECTED");
  return 0;
}