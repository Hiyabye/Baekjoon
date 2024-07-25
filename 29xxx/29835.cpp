#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<n/2; i++) {
    ans += s[i] != s[n-i-1];
  }

  cout << ans << "\n";
  for (int i=0; i<(n+1)/2; i++) cout << min(s[i], s[n-i-1]);
  for (int i=(n+1)/2; i<n; i++) cout << min(s[i], s[n-i-1]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}