#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &s, const string &t, int idx) {
  for (int i=idx; i<s.length(); i++) {
    if (s[i] != t[i-idx]) return false;
  }
  return true;
}

void solve(void) {
  string s, t; cin >> s; t = s;
  reverse(t.begin(), t.end());

  for (int i=0; i<s.length(); i++) {
    if (check(s, t, i)) {
      cout << s << t.substr(s.length()-i) << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}