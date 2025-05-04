#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  map<int, bool> mp;
  for (int i=0; i<n; i++) {
    mp[a[i]] = false;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (b[i] == mp[a[i]]) ans++;
    mp[a[i]] = b[i];
  }

  for (auto [x, y] : mp) {
    if (y) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}