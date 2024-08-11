#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int a = 0, b = 0, d = 0, e = 0;
  for (char c : s) {
    if (c == 'A') a++;
    else b++;
    if (a == 21 || b == 21) {
      if (a > b) d++;
      else e++;
      cout << a << "-" << b << "\n";
      a = b = 0;
    }
  }
  cout << (d > e ? "A" : "B");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}