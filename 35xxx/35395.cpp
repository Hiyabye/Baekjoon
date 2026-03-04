#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, q; cin >> n >> m >> q;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  vector<int> ans(100001, 0);
  for (int j=0; j<m; j++) {
    int cnt = 0;
    for (int i=n-1; i>=0; i--) {
      if (v[i][j] != '*') continue;
      int x = (n-1) - i - cnt;
      ans[x]++; cnt++;
    }
  }
  for (int i=1; i<=100000; i++) ans[i] += ans[i-1];

  while (q--) {
    int t; cin >> t;
    cout << ans[t] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}