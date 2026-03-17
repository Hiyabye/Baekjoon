#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline bool check(const string &s, char c1, char c2) {
  for (int i=0, j=0; i<s.length() || j<s.length(); i++, j++) {
    while (i < s.length() && s[i] == c1) i++;
    while (j < s.length() && s[j] == c2) j++;
    if (j == s.length()) return false;
    else if (i == s.length()) return true;
    else if (s[i] < s[j]) return true;
    else if (s[i] > s[j]) return false;
  }
  return false;
}

void solve(void) {
  string s; cin >> s;

  char x = s[0];
  unordered_set<char> us;
  for (char c : s) {
    if (us.find(c) != us.end()) continue;
    us.insert(c);
    if (check(s, c, x)) x = c;
  }

  for (char c : s) {
    if (c != x) cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}