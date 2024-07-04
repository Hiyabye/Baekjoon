#include <iostream>
#include <string>
using namespace std;

inline bool isLow(char c) { return 'a' <= c && c <= 'z'; }
inline bool isUp(char c) { return 'A' <= c && c <= 'Z'; }
inline bool isNum(char c) { return '0' <= c && c <= '9'; }

bool check(const string &a, const string &b) {
  for (int i=0, j=0; i<a.length(); i++) {
    if (a[i] == b[j]) j++;
    if (j == b.length()) return false;
  }
  for (int i=a.length()-1, j=0; i>=0; i--) {
    if (a[i] == b[j]) j++;
    if (j == b.length()) return false;
  }
  return true;
}

bool one(const string &s) {
  return 9 <= s.length() && s.length() <= 20;
}

bool two(const string &s) {
  int cnt = 0;
  for (char c : s) cnt += isLow(c);
  return cnt >= 2;
}

bool three(const string &s) {
  int cnt = 0;
  for (char c : s) cnt += isUp(c);
  return cnt >= 2;
}

bool four(const string &s) {
  int cnt = 0;
  for (char c : s) cnt += isNum(c);
  return cnt >= 1;
}

bool five(const string &s) {
  int cnt = 0;
  for (char c : s) cnt += !isLow(c) && !isUp(c) && !isNum(c);
  return cnt >= 2;
}

bool six(const string &s) {
  for (int i=2; i<s.length(); i++) {
    if (s[i] == s[i-1] && s[i] == s[i-2]) return false;
  }
  return true;
}

bool seven(const string &s) {
  string t = "";
  for (char c : s) {
    if (isLow(c)) t += c;
    else if (isUp(c)) t += c - 'A' + 'a';
    else if (isNum(c)) t += c;
  }

  for (int i=0; i<t.length()/2; i++) {
    if (t[i] != t[t.length()-i-1]) return true;
  }
  return false;
}

bool eight(const string &s) {
  string t = "";
  for (char c : s) {
    if (isLow(c)) t += c;
    else if (isUp(c)) t += c - 'A' + 'a';
    else if (isNum(c)) t += c;
  }

  return check(t, "password") && check(t, "virginia") && check(t, "cavalier") && check(t, "code");
}

bool solve(void) {
  string s; cin >> s;

  return one(s) && two(s) && three(s) && four(s) && five(s) && six(s) && seven(s) && eight(s);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "V" : "Inv") << "alid Password\n";
  return 0;
}