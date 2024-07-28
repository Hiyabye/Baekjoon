#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int ans = 0;

  string s;
  while (getline(cin, s)) {
    for (int i=3; i<s.length(); i++) {
      if (s[i-3] == 'j' && s[i-2] == 'o' && s[i-1] == 'k' && s[i] == 'e') {
        ans++;
      }
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