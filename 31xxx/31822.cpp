#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n; cin >> n;
  
  int ans = 0;
  while (n--) {
    string t; cin >> t;
    ans += (s.substr(0, 5) == t.substr(0, 5));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}