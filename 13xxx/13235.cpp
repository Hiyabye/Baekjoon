#include <iostream>
#include <string>
using namespace std;

bool palindrome(const string& s) {
  int l = 0, r = s.length() - 1;
  while (l < r) {
    if (s[l] != s[r]) return false;
    l++; r--;
  }
  return true;
}

void solve(void) {
  string s; cin >> s;

  cout << (palindrome(s) ? "true" : "false");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}