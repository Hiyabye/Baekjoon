#include <iostream>
#include <string>
using namespace std;

bool check(const string &s, const string &t) {
  int i = 0, j = 0;
  while (i < s.length() && j < t.length()) {
    if (s[i] == t[j]) i++;
    j++;
  }
  return i == s.length();
}

void solve(void) {
  string s, t;

  while (cin >> s >> t) {
    cout << (check(s, t) ? "Yes" : "No") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}