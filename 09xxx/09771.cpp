#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string w; cin >> w;

  int ans = 0;
  string s;
  while (cin >> s) {
    for (int i=0; i<s.length(); i++) {
      ans += (s.substr(i, w.length()) == w);
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