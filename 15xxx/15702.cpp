#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  vector<vector<char>> c(m, vector<char>(n));
  for (int i=0; i<m; i++) {
    cin >> b[i];
    for (int j=0; j<n; j++) cin >> c[i][j];
  }

  vector<pair<int, int>> ans(m);
  for (int i=0; i<m; i++) {
    int sum = 0;
    for (int j=0; j<n; j++) {
      if (c[i][j] == 'O') sum += a[j];
    }
    ans[i] = {sum, -b[i]};
  }
  sort(ans.begin(), ans.end(), greater<pair<int, int>>());

  cout << -ans[0].second << " " << ans[0].first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}