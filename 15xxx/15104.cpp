#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  for (int i=1; i<s.length(); i++) {
    if (s[i] == s[i-1]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Odd." : "Or not.");
  return 0;
}