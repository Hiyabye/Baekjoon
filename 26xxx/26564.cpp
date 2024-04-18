#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  map<char, int> m;
  for (int i=0; i<5; i++) {
    string s; cin >> s;
    m[s[0]]++;
  }

  int ans = 0;
  for (auto [k, v] : m) {
    ans = max(ans, v);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}