#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - 'A'; }
inline char i2c(int i) { return i + 'A'; }

void solve(void) {
  string a, b; cin >> a >> b;

  cout << "Ciphertext: ";
  for (int i=0; i<b.length(); i++) {
    cout << i2c((c2i(b[i]) + c2i(a[i % a.length()])) % 26);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}