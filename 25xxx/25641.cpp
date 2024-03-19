#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool check(const string &s) {
  if (s.length() & 1) return false;
  return 2 * count(s.begin(), s.end(), 's') == s.length();
}

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  while (!check(s)) s = s.substr(1);
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}