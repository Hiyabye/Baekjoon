#include <iostream>
#include <string>
using namespace std;

inline bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(void) {
  long long s, e; cin >> s >> e;

  while (s <= e) {
    string p = to_string(s++);
    cout << (palindrome(p) ? "Palindrome!" : p) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}