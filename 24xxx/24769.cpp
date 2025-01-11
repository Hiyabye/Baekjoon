#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

inline int calc(const string &s) {
  int cnt = 0;
  for (int i=1; i<s.length(); i++) {
    if (vowel(s[i]) && s[i] == s[i-1]) cnt++;
  }
  return cnt;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  string ans; cin >> ans;
  int mx = calc(ans);
  while (--n) {
    string s; cin >> s;
    int cur = calc(s);
    if (cur > mx) {
      mx = cur;
      ans = s;
    }
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}