#include <iostream>
#include <string>
using namespace std;

bool palindrome(const string &s) {
  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;
  for (int i=1; i<s.length(); i++) {
    if (palindrome(s.substr(0, i)) && palindrome(s.substr(i, s.length()-i))) {
      cout << s.substr(0, i) << " " << s.substr(i, s.length()-i);
      return;
    }
  }
  cout << "NO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}