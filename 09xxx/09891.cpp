#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline bool check(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first <= b.first && a.second <= b.second) return false;
  if (a.first >= b.first && a.second >= b.second) return false;
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    v[i] = {x2 - x1, y2 - y1};
    if (v[i].first > v[i].second) swap(v[i].first, v[i].second);
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (check(v[i], v[j])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}