#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k; cin.ignore();
  string s; getline(cin, s);

  for (char c : s) {
    if ('a' <= c && c <= 'z') {
      cout << (char)('a' + (c - 'a' + 26 - k) % 26);
      if (++k == 26) k = 1;
    } else {
      cout << c;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}