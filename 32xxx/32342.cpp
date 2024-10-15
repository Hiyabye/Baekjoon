#include <iostream>
#include <string>
using namespace std;

int solve(void) {
  string s; cin >> s;

  int ans = 0;
  for (int i=2; i<s.length(); i++) {
    ans += s.substr(i-2, 3) == "WOW";
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) cout << solve() << "\n";
  return 0;
}