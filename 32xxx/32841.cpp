#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;

  int idx = 0;
  while (r--) {
    string s; cin >> s;
    int a, b, x = c - s.length();
    if (x % 2 == 0)     a = b = x / 2;
    else if (idx++ & 1) a = (x+1) / 2, b = (x-1) / 2;
    else                a = (x-1) / 2, b = (x+1) / 2;
    while (a--) cout << '.';
    cout << s;
    while (b--) cout << '.';
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}