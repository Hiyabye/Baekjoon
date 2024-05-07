#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "";
  for (int i=0; i<n; i++) {
    if (s[i] == 'J' || s[i] == 'A' || s[i] == 'V') continue;
    ans += s[i];
  }
  cout << (ans.empty() ? "nojava" : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}