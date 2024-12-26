#include <iostream>
#include <string>
using namespace std;

inline bool check(const string &a, const string &b) {
  int l = 0, o = 0;
  for (char c : a) {
    if (c == 'L') l++;
    else o++;
  }
  for (char c : b) {
    if (c == 'L') l--;
    else o--;
  }
  return l && o;
}

int solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  for (int i=1; i<n; i++) {
    if (check(s.substr(0, i), s.substr(i))) return i;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}