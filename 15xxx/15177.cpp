#include <iostream>
#include <string>
using namespace std;

inline int calc(char a, char b, int c) {
  return (a == b || a == b - 'A' + 'a') * c;
}

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (char c : s) {
    ans += calc(c, 'A', 2);
    ans += calc(c, 'B', -1);
    ans += calc(c, 'D', -1);
    ans += calc(c, 'G', 1);
    ans += calc(c, 'I', -3);
    ans += calc(c, 'N', 1);
    ans += calc(c, 'O', 2);
    ans += calc(c, 'W', -1);
  }
  cout << (ans ? (ans > 0 ? "Kangaroos" : "Kiwis") : "Feud continues");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}