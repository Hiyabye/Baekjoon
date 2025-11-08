#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int ans = 1, cur = 1;
  for (int i=1; i<s.length(); i++) {
    cur = (s[i] > s[i-1] ? cur + 1 : 1);
    ans += cur;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}