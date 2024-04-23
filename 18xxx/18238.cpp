#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  s = "A" + s;

  int ans = 0;
  for (int i=1; i<s.length(); i++) {
    ans += min(abs(s[i]-s[i-1]), 26-abs(s[i]-s[i-1]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}