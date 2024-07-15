#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int search(const string &s) {
  for (int i=0; i<s.length(); i++) {
    if (s[i] == 'x' || s[i] == 'X') return i;
  }
  return -1;
}

inline char toUpper(char c) {
  return 'a' <= c && c <= 'z' ? c - 'a' + 'A' : c;
}

void solve(void) {
  int n; cin >> n;
  vector<string> s(n), t(n);
  for (int i=0; i<n; i++) cin >> s[i] >> t[i];

  for (int i=0; i<n; i++) {
    cout << toUpper(t[i][search(s[i])]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}