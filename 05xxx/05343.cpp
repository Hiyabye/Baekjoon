#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=0; i<s.length(); i+=8) {
    int cnt = count(s.begin()+i, s.begin()+i+7, '1');
    if ((cnt & 1) ^ (s[i+7] - '0')) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}