#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  vector<int> l(1001, 0), r(1001, 0);
  l[v[n-1].first] = v[n-1].second; r[v[0].first] = v[0].second;
  for (int i=1; i<n; i++) for (int j=v[i-1].first; j<v[i].first; j++) {
    l[j] = max(l[j-1], v[i-1].second);
  }
  for (int i=n-2; i>=0; i--) for (int j=v[i+1].first; j>v[i].first; j--) {
    r[j] = max(r[j+1], v[i+1].second);
  }

  int ans = 0;
  for (int i=v[0].first; i<=v[n-1].first; i++) {
    ans += min(l[i], r[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}