#include <iostream>
#include <string>
using namespace std;

inline char up(char c) { return c - 'a' + 'A'; }
inline char low(char c) { return c - 'A' + 'a'; }

string c2s(const string &s) {
  string ret = "";
  for (char c : s) {
    if (c >= 'A' && c <= 'Z') {
      ret += "_";
      ret += low(c);
    } else {
      ret += c;
    }
  }
  return ret;
}

string c2p(const string &s) {
  string ret = s;
  ret[0] = up(s[0]);
  return ret;
}

string s2c(const string &s) {
  string ret = "";
  for (int i=0; i<s.length(); i++) {
    ret += (s[i] == '_') ? up(s[++i]) : s[i];
  }
  return ret;
}

string p2c(const string &s) {
  string ret = s;
  ret[0] = low(s[0]);
  return ret;
}

void solve(void) {
  int n; string s; cin >> n >> s;

  if (n == 1) {
    cout << s << "\n" << c2s(s) << "\n" << c2p(s);
  } else if (n == 2) {
    cout << s2c(s) << "\n" << s << "\n" << c2p(s2c(s));
  } else {
    cout << p2c(s) << "\n" << c2s(p2c(s)) << "\n" << s;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}