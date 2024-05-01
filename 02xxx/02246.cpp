#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  vector<bool> ans(n, true);
  for (int i=0; i<n; i++) for (int j=0; j<n && ans[i]; j++) {
    if (i == j) continue;
    if (v[i].first >= v[j].first && v[i].second >= v[j].second) ans[i] = false;
  }
  cout << count(ans.begin(), ans.end(), true);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}