#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 1, cnt = 1;
  for (int i=1; i<s.length(); i++) {
    if (s[i] == s[i-1]) cnt++;
    else cnt = 1;
    ans = max(ans, cnt);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  for (int i=0; i<3; i++) solve();
  return 0;
}