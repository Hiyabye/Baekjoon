#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> c(k);
  for (int i=0; i<k; i++) cin >> c[i];

  int sum = 0, mx = 0;
  for (int i=0; i<k; i++) {
    sum += c[i];
    mx = max(mx, c[i]);
  }
  if (mx > sum - mx + 1) {
    cout << -1;
    return;
  }

  vector<pair<int, int>> v(k);
  for (int i=0; i<k; i++) {
    v[i] = {c[i], i+1};
  }
  sort(v.begin(), v.end(), greater<pair<int, int>>());

  vector<int> ans(n);
  int idx = 0;
  for (int i=0; i<n; i+=2) {
    ans[i] = v[idx].second;
    if (--v[idx].first == 0) idx++;
  }
  for (int i=1; i<n; i+=2) {
    ans[i] = v[idx].second;
    if (--v[idx].first == 0) idx++;
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}