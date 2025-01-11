#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  for (char c : s) {
    cout << (char)('a' + (c - 'a' + 13) % 26);
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}