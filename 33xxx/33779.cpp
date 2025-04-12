#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  for (int i=0; i<s.length()/2; i++) {
    if (s[i] != s[s.length()-i-1]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "beep" : "boop");
  return 0;
}