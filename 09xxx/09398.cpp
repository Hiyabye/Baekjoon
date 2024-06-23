#include <iostream>
#include <string>
using namespace std;

bool check(const string &s) {
  bool a = false, b = false, c = false;
  for (int i=0; i<s.length(); i++) {
    if ('A' <= s[i] && s[i] <= 'Z') a = true;
    if ('a' <= s[i] && s[i] <= 'z') b = true;
    if ('0' <= s[i] && s[i] <= '9') c = true;
  }
  return a && b && c;
}

int solve(void) {
  string s; cin >> s;

  for (int i=6; i<=s.length(); i++) {
    for (int j=0; j<=s.length()-i; j++) {
      if (check(s.substr(j, i)))  return i;
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << solve() << "\n";
  return 0;
}