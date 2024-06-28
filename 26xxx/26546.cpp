#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; int i, j; cin >> s >> i >> j;

  cout << s.substr(0, i) << s.substr(j) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}