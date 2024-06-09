#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<s.length(); i++) {
    if (s[i] < 'A' || s[i] > 'Z') continue;
    ans += (4 - (ans + i) % 4) % 4;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}