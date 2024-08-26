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

  int ans = 1;
  for (int i=1; i<n; i++) {
    if (v[i-1].first + v[i-1].second < v[i].first) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}