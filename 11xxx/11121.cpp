#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  cout << (a == b ? "OK" : "ERROR") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}