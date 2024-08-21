#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int calc(const string &s, const string &t) {
  int idx = 0, ret = t.length() + 1;
  while (idx < s.length() && idx < t.length() && s[idx] == t[idx]) ret--, idx++;
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<string> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = a[0].length();
  for (int i=1; i<n; i++) {
    ans += calc(a[i-1], a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}