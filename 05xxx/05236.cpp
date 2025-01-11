#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  string ans = string(1, s.back());
  for (int i=1; i<s.length(); i++) {
    char c = s[s.length()-i-1];
    if (c <= ans.front()) break;
    ans = c + ans;
  }
  cout << "The longest decreasing suffix of " << s << " is " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}