#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int calc(int x) {
  int ret = 0;
  while (x) {
    if (x % 10 == 9) ret++;
    x /= 10;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  vector<int> row(n), col(m);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      row[i] += calc(v[i][j]);
      col[j] += calc(v[i][j]);
    }
  }
  cout << accumulate(row.begin(), row.end(), 0) - max(*max_element(row.begin(), row.end()), *max_element(col.begin(), col.end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}