#include <iostream>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (char c : s) {
    switch (c) {
      case 'a': cout << "4"; break;
      case 'e': cout << "3"; break;
      case 'i': cout << "1"; break;
      case 'o': cout << "0"; break;
      case 's': cout << "5"; break;
      default: cout << c; break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}