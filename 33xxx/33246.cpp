#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(const string &s, const string &t) {
  if (s.length() != t.length()) return false;
  int cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] != t[i]) cnt++;
  }
  return cnt <= 1;
}

bool solve(void) {
  int n; cin >> n;
  string s; cin >> s;
  vector<string> t(n), u(n);
  for (int i=0; i<n; i++) cin >> t[i] >> u[i];

  for (int i=0; i<n; i++) {
    if (check(s, t[i])) {
      if (u[i] == "DENIED") return false;
    } else {
      if (u[i] == "ALLOWED") return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "SYSTEM SECURE" : "INTEGRITY OVERFLOW");
  return 0;
}