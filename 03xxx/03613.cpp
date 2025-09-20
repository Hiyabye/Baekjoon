#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool cpp(const string &s) {
  if (s[0] == '_' || s.back() == '_') return false;
  for (char c : s) if (isupper(c)) return false;
  for (int i=1; i<s.length(); i++) {
    if (s[i-1] == '_' && s[i] == '_') return false;
  }
  return true;
}

bool java(const string &s) {
  if (isupper(s[0]) || s[0] == '_' || s.back() == '_') return false;
  for (char c : s) if (c == '_') return false;
  return true;
}

string c2j(const string &s) {
  string t = "";
  for (int i=0; i<s.length(); i++) {
    if (s[i] == '_') t += toupper(s[++i]);
    else t += s[i];
  }
  return t;
}

string j2c(const string &s) {
  string t = "";
  for (char c : s) {
    if (isupper(c)) t += '_', t += tolower(c);
    else t += c;
  }
  return t;
}

void solve(void) {
  string s; cin >> s;

  if (cpp(s)) cout << c2j(s);
  else if (java(s)) cout << j2c(s);
  else cout << "Error!";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}