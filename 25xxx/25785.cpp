#include <iostream>
#include <string>
using namespace std;

bool vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool solve(void) {
  string s; cin >> s;

  for (int i=1; i<s.length(); i++) {
    if (vowel(s[i-1]) == vowel(s[i])) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}