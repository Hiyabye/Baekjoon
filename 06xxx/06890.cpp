#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - 'A'; }
inline char i2c(int i) { return i + 'A'; }

inline char calc(char a, char b) {
  return i2c((c2i(a) + c2i(b)) % 26);
}

void solve(void) {
  string a; getline(cin, a);
  string b; getline(cin, b);
  
  for (int i=0; i<b.length(); i++) {
    if ('A' <= b[i] && b[i] <= 'Z') continue;
    b.erase(i--, 1);
  }

  for (int i=0; i<b.length(); i++) {
    cout << calc(b[i], a[i % a.length()]);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}