#include <iostream>
#include <string>
using namespace std;

inline int calc(const string &l, const string &r) {
  if (l.empty() || l[0] != r[0]) return 0;
  return calc(l.substr(1), r.substr(1)) + (l[0] == '8');
}

int solve(void) {
  string l, r; cin >> l >> r;

  return l.length() == r.length() ? calc(l, r) : 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}