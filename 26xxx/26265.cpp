#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

inline bool cmp(const pair<string, string> &x, const pair<string, string> &y) {
  if (x.first != y.first) return x.first < y.first;
  return x.second > y.second;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<string, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<n; i++) {
    cout << v[i].first << " " << v[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}