#include <iostream>
#include <string>
using namespace std;

inline char calc(char c) {
  if (c == '0' || c == '1' || c == '8') return c;
  if (c == '6') return '9';
  if (c == '9') return '6';
  return 'x';
}

inline bool check(const string &s) {
  for (int i=0; i<=s.length()/2; i++) {
    if (calc(s[i]) != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(void) {
  int m; cin >> m;
  int n; cin >> n;

  int ans = 0;
  for (int i=m; i<=n; i++) {
    if (check(to_string(i))) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}