#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c; }
inline char i2c(int i) { return i; }

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  for (char c : s) ans += c2i(c);
  cout << i2c(ans / s.length());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}