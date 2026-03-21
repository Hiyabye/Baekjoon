#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s, const string &t) {
  int i = 0;
  while (i < (int)s.length() && i < (int)t.length() && s[i] == t[i]) i++;
  return (int)s.length() - i;
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = s.length();
  while (--n) {
    string t; cin >> t;
    ans += 1 + min((int)t.length(), 1 + calc(s, t) + calc(t, s));
    s = t;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}