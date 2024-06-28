#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;
  vector<vector<int> > v(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<n; i++) {
    int cnt = 0;
    for (int j=m-1; j>=0; j--) {
      if (v[j][i]) {
        ans += m-1-j-cnt;
        cnt++;
      }
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}