#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;

  int ans = 0;
  for (int i=n; i<=m; i++) {
    string s = to_string(i);
    for (auto j=0; j<s.length(); j++) {
      if (s[j] == '0') ans++;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}