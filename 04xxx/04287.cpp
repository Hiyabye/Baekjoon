#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - 'a'; }
inline char i2c(int i) { return i + 'a'; }
inline int mod(int a, int b) { return (a % b + b) % b; }

bool solve(void) {
  string a; cin >> a;
  if (a == "#") return false;
  string b, c; cin >> b >> c;

  string ans = "";
  for (int i=0; i<a.length(); i++) {
    int d = mod(c2i(b[i]) - c2i(a[i]), 26);
    ans += i2c(mod(c2i(c[i]) + d, 26));
  }
  cout << a << " " << b << " " << c << " " << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}