#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0, cnt = 1;
  for (int i=1; i<s.length(); i++) {
    if (s[i] == s[i-1] + 1) cnt++;
    else cnt = 1;
    if (cnt == 3) ans++;
    if (cnt == 4) ans--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}