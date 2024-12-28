#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  cout << (s[0] < '2') + (s[6] == '-') + 18 << s.substr(0, 6) << s.substr(7, 4);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}