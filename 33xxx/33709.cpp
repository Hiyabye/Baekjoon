#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0, cur = 0;
  for (char c : s) {
    if (c == '.' || c == '|' || c == ':' || c == '#') {
      ans += cur; cur = 0;
    } else {
      cur = 10 * cur + c - '0';
    }
  }
  cout << ans + cur;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}