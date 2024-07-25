#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s, const string &t) {
  if (t.length() < 4) return false;
  if (t.find(s[0]) == string::npos) return false;
  for (char c : t) {
    if (s.find(c) == string::npos) return false;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;

  int n; cin >> n;
  while (n--) {
    string t; cin >> t;
    if (check(s, t)) cout << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}