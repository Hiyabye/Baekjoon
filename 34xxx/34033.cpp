#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  unordered_map<string, int> mp;
  while (n--) {
    string a; int b; cin >> a >> b;
    mp[a] = b;
  }

  int ans = 0;
  while (m--) {
    string c; int d; cin >> c >> d;
    if (d > mp[c] * 105 / 100) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}