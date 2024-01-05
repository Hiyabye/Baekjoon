#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);

  int ans = 0, x;
  while (ss >> x) ans += x;
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}