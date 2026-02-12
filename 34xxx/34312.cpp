#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first != b.first) return a.first < b.first;
  return a.second > b.second;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  long long ans = 0, idx = 0;
  while (idx < n && m >= v[idx].first) {
    m -= v[idx].first;
    ans += v[idx].second;
    idx++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}