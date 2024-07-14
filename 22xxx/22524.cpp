#include <iostream>
#include <string>
using namespace std;

inline bool calc(char c) {
  string t = "qwertasdfgzxcvb";
  return t.find(c) != string::npos;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  int ans = 0;
  for (int i=1; i<s.length(); i++) {
    if (calc(s[i]) != calc(s[i-1])) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}