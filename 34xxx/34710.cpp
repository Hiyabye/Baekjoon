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

  int t_max = v.back().first;
  vector<int> k(t_max + 1, 0);
  for (auto &[a, b] : v) k[a] = max(k[a], b);
  for (int i=t_max-1; i>=0; i--) k[i] = max(k[i], k[i+1]-1);
  for (int i=1; i<=t_max; i++) k[i] = max(k[i], k[i-1]);
  for (int i=1; i<=t_max; i++) {
    if (k[i] > i) {
      cout << -1;
      return;
    }
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += v[i].first - k[v[i].first];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}