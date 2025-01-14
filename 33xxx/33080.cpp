#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  map<int, int> mp;
  for (int i=0; i<n-2; i++) for (int j=i+1; j<n-1; j++) for (int k=j+1; k<n; k++) {
    if (max({a[i], a[j], a[k]}) - min({a[i], a[j], a[k]}) <= m) mp[a[i]+a[j]+a[k]]++;
  }

  int cnt = 0;
  for (auto [_, v] : mp) cnt += v;
  if (cnt) cout << cnt << " " << mp.rbegin()->first;
  else cout << -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}