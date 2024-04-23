#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  int ans = 0;
  for (char c : s) {
    if (c < 'A' || c > 'Z') continue;
    ans += c - 'A' + 1;
  }
  cout << (ans == 100 ? "PERFECT LIFE" : to_string(ans)) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}