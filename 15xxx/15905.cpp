#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first != b.first) return a.first > b.first;
    return a.second < b.second;
  });

  int ans = 0;
  for (int i=5; i<n; i++) {
    if (v[i].first == v[4].first) ans++;
    else break;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}