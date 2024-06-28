#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  string ans = "";
  int idx = 0;
  while (idx < s.length()-1) {
    ans += s[idx];
    idx += s[idx] - 'A' + 1;
  }
  ans += s.back();

  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}