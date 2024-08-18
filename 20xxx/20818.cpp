#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = s.length();
  s += s;

  int cur = 0;
  for (int i=0; i<n/2; i++) {
    cur += s[i] == 'B';
  }

  int ans = cur;
  for (int i=n/2; i<2*n; i++) {
    cur += s[i] == 'B';
    cur -= s[i-n/2] == 'B';
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}