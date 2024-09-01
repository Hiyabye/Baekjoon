#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first;
  for (int i=0; i<n; i++) cin >> v[i].second;
  sort(v.begin(), v.end());

  for (int i=0; i<n; i++) {
    if (m < v[i].first) break;
    if (v[i].first >= v[i].second) continue;
    m += v[i].second - v[i].first;
  }
  cout << m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}