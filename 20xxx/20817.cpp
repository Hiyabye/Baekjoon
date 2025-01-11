#include <iostream>
#include <string>
using namespace std;

inline bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

void solve(void) {
  string s; getline(cin, s);
  if (s.length() < 3) {
    cout << s;
    return;
  }

  cout << s.substr(0, 2);
  for (int i=2; i<s.length(); i++) {
    if (!vowel(s[i]) && s[i] == s[i-1] && s[i] == s[i-2]) continue;
    cout << s[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}