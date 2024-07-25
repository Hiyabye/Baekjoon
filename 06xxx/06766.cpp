#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int k; cin >> k;
  string s; cin >> s;

  for (int i=0; i<s.length(); i++) {
    cout << (char)('A' + (s[i] - 'A' - 3 * i - k + 23) % 26);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}