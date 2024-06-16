#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  vector<int> v(n, 0);
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    v[j] += a[j][i];
    if (v[j] >= k) return {j+1, i+1};
  }
  return {0, 0};
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  auto [x, y] = solve();
  cout << x << " " << y;
  return 0;
}