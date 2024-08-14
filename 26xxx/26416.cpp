#include <iostream>
#include <string>
using namespace std;

inline bool check1(const string &s) {
  for (char c : s) {
    if ('A' <= c && c <= 'Z') return true;
  }
  return false;
}

inline bool check2(const string &s) {
  for (char c : s) {
    if ('a' <= c && c <= 'z') return true;
  }
  return false;
}

inline bool check3(const string &s) {
  for (char c : s) {
    if ('0' <= c && c <= '9') return true;
  }
  return false;
}

inline bool check4(const string &s) {
  for (char c : s) {
    if (c == '#' || c == '@' || c == '*' || c == '&') return true;
  }
  return false;
}

void solve(int idx) {
  int n; cin >> n;
  string s; cin >> s;

  if (!check1(s)) s += 'A';
  if (!check2(s)) s += 'a';
  if (!check3(s)) s += '0';
  if (!check4(s)) s += '#';
  while (s.length() < 7) s += 'A';

  cout << "Case #" << idx << ": " << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}