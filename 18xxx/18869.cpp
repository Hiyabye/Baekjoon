#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool check(int n, const vector<pair<int, int>> &a, const vector<pair<int, int>> &b) {
  for (int i=0; i<n; i++) {
    if (a[i].second != b[i].second) return false;
  }
  return true;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<pair<int, int>>> v(m, vector<pair<int, int>>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j].first, v[i][j].second = j;

  for (int i=0; i<m; i++) sort(v[i].begin(), v[i].end());
  for (int i=0; i<m; i++) for (int j=1; j<n; j++) {
    if (v[i][j].first == v[i][j-1].first) v[i][j].second = v[i][j-1].second;
  }

  int ans = 0;
  for (int i=0; i<m-1; i++) for (int j=i+1; j<m; j++) {
    if (check(n, v[i], v[j])) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}