#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];
  vector<vector<int>> t(n, vector<int>(n+m));
  for (int i=0; i<n; i++) for (int j=0; j<n+m; j++) cin >> t[i][j];

  vector<int> ans(n+m, 0);
  for (int i=0; i<n; i++) ans[i] = s[i];
  for (int i=0; i<n; i++) {
    for (int j=0; j<n+m; j++) {
      ans[j] += t[i][j];
      ans[i] -= t[i][j];
    }
  }

  for (int i=0; i<n+m; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}