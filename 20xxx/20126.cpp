#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int solve(void) {
  int n, m, s; cin >> n >> m >> s;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i].first >> v[i].second;
    v[i].second += v[i].first;
  }
  sort(v.begin(), v.end());

  if (m <= v[0].first) return 0;
  for (int i=1; i<n; i++) {
    if (v[i].first - v[i-1].second >= m) return v[i-1].second;
  }
  if (s - v[n-1].second >= m) return v[n-1].second;
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}