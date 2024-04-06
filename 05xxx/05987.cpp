#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, c; string s; cin >> n >> c >> s;

  while (c--) s = s.substr(n) + s;
  cout << s << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}