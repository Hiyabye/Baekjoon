#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline string calc(const string &s, int i) {
  return s.substr(i) + s.substr(0, i);
}

void solve(void) {
  string s; cin >> s;

  string ans = s;
  for (int i=1; i<s.length(); i++) {
    ans = min(ans, calc(s, i));
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}