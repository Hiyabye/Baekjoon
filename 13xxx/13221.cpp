#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int x, y; cin >> x >> y;
  int n; cin >> n;
  vector<pair<int, pair<int, int>>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second.first >> v[i].second.second;

  for (int i=0; i<n; i++) {
    v[i].first = abs(x - v[i].second.first) + abs(y - v[i].second.second);
  }
  sort(v.begin(), v.end());

  cout << v[0].second.first << " " << v[0].second.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}