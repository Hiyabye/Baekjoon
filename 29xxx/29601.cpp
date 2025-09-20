#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int p = stoi(s.substr(1));
  if (p < 1 || (s[0] == 'C' && p > 36) || (s[0] == 'R' && p > 54)) {
    cout << -1;
    return;
  }

  if (s[0] == 'C' || p <= 36) cout << (p - 1) / 4 + 1 << " 1 ";
  else cout << 9 - (p - 37) / 2 << " 0 ";
  cout << (p & 1 ? -1 : 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}