#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s) {
  int ret = 0;
  for (int i=1; i<s.length()-1; i++) {
    if (s[i] == '^' && s[i-1] == '+' && s[i+1] == '+') ret++;
    if (s[i] == '^' && s[i-1] == '-' && s[i+1] == '-') ret--;
  }
  return ret;
}

void solve(void) {
  string s; cin >> s;
  int n = s.length();
  if (n < 3) {
    cout << 0;
    return;
  }

  int start = calc(s);
  int ans = start;
  for (int i=0; i<n; i++) {
    int cur = start;
    if (i > 0 && i+1 < n) {
      if (s[i] == '^' && s[i-1] == '+' && s[i+1] == '+') cur--;
      if (s[i] == '^' && s[i-1] == '-' && s[i+1] == '-') cur++;
    }
    if (i > 1 && s[i-1] == '^') {
      if (s[i-2] == '+' && s[i] == '+') cur--;
      if (s[i-2] == '-' && s[i] == '-') cur++;
    }
    if (i+2 < n && s[i+1] == '^') {
      if (s[i] == '+' && s[i+2] == '+') cur--;
      if (s[i] == '-' && s[i+2] == '-') cur++;
    }
    if (i > 1 && i+1 < n) {
      if (s[i-1] == '^' && s[i-2] == '+' && s[i+1] == '+') cur++;
      if (s[i-1] == '^' && s[i-2] == '-' && s[i+1] == '-') cur--;
    }
    if (i > 0 && i+2 < n) {
      if (s[i+1] == '^' && s[i-1] == '+' && s[i+2] == '+') cur++;
      if (s[i+1] == '^' && s[i-1] == '-' && s[i+2] == '-') cur--;
    }
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}