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
  int n; cin >> n;

  int cnt = 0;
  while (n--) {
    string s; cin >> s;
    if (palindrome(s)) cnt++;
  }
  cout << cnt * (cnt-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}