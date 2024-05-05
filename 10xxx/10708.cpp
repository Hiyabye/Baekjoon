#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;
  vector<int> a(m);
  for (int i=0; i<m; i++) cin >> a[i];
  vector<vector<int>> b(m, vector<int>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> b[i][j];

  vector<int> ans(n, 0);
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) {
    ans[(a[i] == b[i][j]) ? j : a[i]-1]++;
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}