#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  int n; cin >> n;
  string t; cin >> t;

  int ans = 0;
  for (int i=0; i<n/2; i++) {
    if (t[i] == '?' && t[n-i-1] == '?') ans += 26;
    else if (t[i] == '?' || t[n-i-1] == '?') ans++;
    else if (t[i] != t[n-i-1]) return 0;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}