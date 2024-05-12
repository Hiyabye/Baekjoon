#include <iostream>
#include <string>
using namespace std;

bool solve(const string &s) {
  string t; cin >> t;

  for (int i=0, j=0; i<t.length(); i++) {
    if (t[i] == s[j]) j++;
    if (j == s.length()) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;
  string s; cin >> s;
  while (m--) cout << (solve(s) ? "true" : "false") << "\n";
  return 0;
}