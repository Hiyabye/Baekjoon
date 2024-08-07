#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0, cur = 0;
  for (char c : s) {
    if (c == "HONI"[cur]) {
      if (cur == 3) ans++;
      cur = (cur + 1) % 4;
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