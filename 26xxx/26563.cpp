#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;
  string s, t; cin >> s >> t;

  int cnt = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == t[i]) cnt++;
  }
  cout << (int)s.length() - max(cnt, k) + min(cnt, k) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m; cin >> m;
  while (m--) solve();
  return 0;
}