#include <iostream>
#include <string>
using namespace std;

bool check(const string &s, const string &t) {
  int sLen = s.length(), tLen = t.length();
  if (sLen > tLen) return false;
  if (sLen == tLen) return s == t;
  if (s == t.substr(0, sLen) && t[sLen] == '_') return true;
  if (s == t.substr(tLen-sLen, sLen) && t[tLen-sLen-1] == '_') return true;
  for (int i=1; i<tLen-sLen; i++) {
    if (s == t.substr(i, sLen) && t[i-1] == '_' && t[i+sLen] == '_') return true;
  }
  return false;
}

void solve(void) {
  int n; string s; cin >> n >> s;

  int ans = 0;
  while (n--) {
    string t; int k; cin >> t >> k;
    if (check(s, t)) ans += k;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}