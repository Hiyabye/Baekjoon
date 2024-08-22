#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline double dist(const vector<pair<double, double>> &v, int a, int b) {
  return hypot(v[a].first - v[b].first, v[a].second - v[b].second);
}

void solve(void) {
  int z; cin >> z;
  vector<pair<double, double>> v(z);
  for (int i=0; i<z; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  pair<int, int> ans = {0, 1};
  for (int i=0; i<z-1; i++) for (int j=i+1; j<z; j++) {
    if (dist(v, i, j) < dist(v, ans.first, ans.second)) {
      ans = {i, j};
    }
  }
  cout << v[ans.first].first << " " << v[ans.first].second << " ";
  cout << v[ans.second].first << " " << v[ans.second].second << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}