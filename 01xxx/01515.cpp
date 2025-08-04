#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 1, idx = 0;
  while (true) {
    for (char c : to_string(ans)) {
      if (s[idx] != c || ++idx != s.length()) continue;
      cout << ans;
      return;
    }
    ans++;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}