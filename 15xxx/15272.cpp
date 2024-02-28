#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  int n = s.length();
  for (int i=1; i<n; i++) {
    if (s[i-1] == 's' && s[i] == 's') return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "hiss" : "no hiss");
  return 0;
}