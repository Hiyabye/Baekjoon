#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(const string &p, const string &s) {
  if (p.length() != s.length()) return false;
  for (int i=0; i<p.length(); i++) {
    if (p[i] == '*') continue;
    if (p[i] != s[i]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  string p; cin >> p;

  vector<string> ans;
  for (const string &s : v) {
    if (check(p, s)) ans.push_back(s);
  }

  cout << ans.size() << "\n";
  for (const string &s : ans) {
    cout << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}