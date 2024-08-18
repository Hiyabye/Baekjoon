#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    char c; cin >> c;
    v[i][j] = c != '1';
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    int cur = 0;
    for (int j=0; j<k && j<m; j++) {
      cur += v[i][j];
    }
    if (cur == k) ans++;
    for (int j=k; j<m; j++) {
      cur += v[i][j] - v[i][j-k];
      if (cur == k) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}