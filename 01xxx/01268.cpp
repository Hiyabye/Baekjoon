#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calc(int n, const vector<vector<int>> &v, int cur) {
  vector<bool> p(n, false);
  for (int i=0; i<n; i++) for (int j=0; j<5; j++) {
    if (v[i][j] == v[cur][j]) p[i] = true;
  }
  return count(p.begin(), p.end(), true);
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(5));
  for (int i=0; i<n; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  pair<int, int> ans = {0, 0};
  for (int i=0; i<n; i++) {
    int cnt = calc(n, v, i);
    if (ans.first < cnt) ans = {cnt, i+1};
  }
  cout << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}