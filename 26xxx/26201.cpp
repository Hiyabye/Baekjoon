#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0, cnt = 1;
  for (int i=1; i<n; i++) {
    if (s[i] == s[i-1]) {
      cnt++;
    } else {
      if (s[i-1] == 'a' && cnt > 1) ans += cnt;
      cnt = 1;
    }
  }
  if (s.back() == 'a' && cnt > 1) ans += cnt;

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}