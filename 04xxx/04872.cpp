#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s, ans; cin >> ans;
  while (cin >> s) {
    for (int i=0; i<s.length(); i++) {
      int x = ((ans[i] - '0') + (s[i] - '0')) % 10;
      ans[i] = x + '0';
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}