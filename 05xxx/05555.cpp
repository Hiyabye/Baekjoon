#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string t; cin >> t;
    t += t;
    if (t.find(s) != string::npos) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}