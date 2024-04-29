#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first * b.second == b.first * a.second) return a.second > b.second;
  return a.first * b.second < b.first * a.second;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  cout << v.back().second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}