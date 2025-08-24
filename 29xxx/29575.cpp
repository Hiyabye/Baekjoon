#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    string c; int w; cin >> c >> w;
    mp[c] = w;
  }
  int m; cin >> m;

  int ans = 0;
  while (m--) {
    string c; cin >> c;
    if (mp.find(c) != mp.end()) ans += mp[c];
    ans -= 10;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}