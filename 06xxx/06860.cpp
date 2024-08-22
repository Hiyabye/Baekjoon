#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &a, const string &b, const string &s) {
  for (char c : s) {
    if ('a' <= c && c <= 'z') {
      if (a.find(c) == string::npos || b.find(c) == string::npos) return false;
    } else {
      if (a.find(c) == string::npos && b.find(c) == string::npos) return false;
    }
  }
  return true;
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int x; cin >> x;
  while (x--) {
    string s; cin >> s;
    cout << (check(a, b, s) ? "Possible baby." : "Not their baby!") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}