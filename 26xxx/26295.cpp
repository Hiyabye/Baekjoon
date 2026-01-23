#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(m);
  vector<char> c(m);
  for (int i=0; i<m; i++) cin >> a[i] >> c[i];

  string s = string(n, '?'); s[0] = c[0];
  for (int i=1, j=0; i<m; i++) {
    j = (j + n - a[i] % n) % n;
    if (s[j] != '?' && s[j] != c[i]) return "!";
    s[j] = c[i];
  }
  rotate(s.begin(), s.begin() + s.find(c.back()), s.end());

  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (s[i] == '?' || s[j] == '?') continue;
    if (s[i] == s[j]) return "!";
  }
  return s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}