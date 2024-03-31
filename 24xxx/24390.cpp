#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - '0'; }

void solve(void) {
  string s; cin >> s;

  cout << 1 + c2i(s[0]) + c2i(s[1]) + (c2i(s[3]) % 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}