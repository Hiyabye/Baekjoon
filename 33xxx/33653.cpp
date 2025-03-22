#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string w; cin >> w;
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    string s; cin >> s;
    for (int i=w.length(); i<=s.length(); i++) {
      if (s.substr(i-w.length(), w.length()) == w) ans++;
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