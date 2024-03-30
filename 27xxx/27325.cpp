#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0, cur = 1;
  for (char c : s) {
    cur += (c == 'R' && cur < 3) - (c == 'L' && cur > 1);
    ans += (cur == 3);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}