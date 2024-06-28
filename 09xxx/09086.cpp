#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << s[0] << s.back() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}