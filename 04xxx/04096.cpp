#include <iostream>
#include <string>
using namespace std;

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

inline string next(string s) {
  int carry = 1;
  for (int i=s.length()-1; i>=0; i--) {
    int sum = s[i] - '0' + carry;
    carry = sum / 10;
    s[i] = sum % 10 + '0';
  }
  if (carry) s = '1' + s;
  return s;
}

bool solve(void) {
  string s; cin >> s;
  if (s == "0") return false;

  int ans = 0;
  while (!palindrome(s)) ans++, s = next(s);
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}