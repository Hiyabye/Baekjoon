#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  int l = 0, r = n-1;
  while (r >= 0 && s[r] != s[0]) r--;

  int ans = (r > 0 && r < n-1) ? 2 : 1;
  while (l < r) {
    while (l < r && s[l] == s[l+1]) l++;
    while (l < r && s[r] == s[r-1]) r--;
    if (l < r) {
      ans++;
      l++; r--;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}