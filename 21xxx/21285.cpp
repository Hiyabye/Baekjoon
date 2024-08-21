#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(const string &s, const string &t) {
  if (s.length() != t.length()) return false;
  int diff = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] != t[i]) diff++;
  }
  return diff <= 1;
}

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<n; i++) {
    if (check(s, v[i])) {
      cout << i + 1;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}