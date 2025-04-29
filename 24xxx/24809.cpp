#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 0;
  while (n--) {
    string s; cin >> s;
    a += (s[0] == '0') + (s[1] == '0');
    b += (s[2] == '0') + (s[3] == '0');
  }

  int c = min(a, b) / 2;
  cout << c << " " << a - c * 2 << " " << b - c * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}