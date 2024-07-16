#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    for (char c : s) {
      ans += 4 * (c == 'A') + 3 * (c == 'K') + 2 * (c == 'Q') + (c == 'J');
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}