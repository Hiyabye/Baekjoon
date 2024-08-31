#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  return a.first + a.second < b.first + b.second;
}

void solve(void) {
  int n, b; cin >> n >> b;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (b < v[i].first / 2 + v[i].second) continue;
    int cur = 1, sum = b - v[i].first / 2 - v[i].second;
    for (int j=0; j<n; j++) {
      if (i == j) continue;
      if (sum < v[j].first + v[j].second) break;
      sum -= v[j].first + v[j].second;
      cur++;
    }
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}