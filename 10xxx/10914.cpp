#include <iostream>
#include <sstream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - 'a'; }
inline char i2c(int i) { return i + 'a'; }

void solve(void) {
  int n; cin >> n;
  cin.ignore();
  string s; getline(cin, s);

  stringstream ss(s); string t;
  while (ss >> t) {
    for (int i=1; i<t.length(); i+=2) {
      cout << i2c((c2i(t[i]) + c2i(t[i-1]) + 26 - n) % 26);
    }
    cout << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}