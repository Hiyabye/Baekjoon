#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &s, const string &t) {
  int l = min(s.size(), t.size());
  while (l > 0) {
    if (s.substr(s.size()-l) == t.substr(0, l)) break;
    l--;
  }
  return l;
}

void solve(void) {
  string s; cin >> s;
  string t; cin >> t;

  cout << max(calc(s, t), calc(t, s));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}