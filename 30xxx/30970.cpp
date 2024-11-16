#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool cmp1(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

bool cmp2(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second != b.second) return a.second < b.second;
  return a.first > b.first;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  sort(v.begin(), v.end(), cmp1);
  cout << v[0].first << " " << v[0].second << " " << v[1].first << " " << v[1].second << "\n";

  sort(v.begin(), v.end(), cmp2);
  cout << v[0].first << " " << v[0].second << " " << v[1].first << " " << v[1].second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}