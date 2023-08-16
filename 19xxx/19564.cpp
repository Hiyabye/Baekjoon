#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string s;
  cin >> s;

  int ans = 1;
  char cur = s[0];
  for (int i=1; i<s.length(); i++) {
    if (s[i] <= cur) ans++;
    cur = s[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}