#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int calc(const string &s) {
  int ret = 0;
  for (int i=0; i<s.length(); i++) {
    if (s.substr(i, 3) == "for" || s.substr(i, 5) == "while") ret++;
  }
  return ret;
}

void solve(void) {
  int c; cin >> c;

  int ans = 0;
  while (c--) {
    string s; cin >> s;
    ans = max(ans, calc(s));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}