#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) {
  return c - '0';
}

bool solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<16; i++) {
    if (i & 1) {
      ans += c2i(s[i]);
    } else {
      int x = c2i(s[i]) * 2;
      ans += x / 10 + x % 10;
    }
  }
  return ans % 10 == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "DA" : "NE");
  return 0;
}