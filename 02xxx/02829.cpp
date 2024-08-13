#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n+2, vector<int>(n+2, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) cin >> v[i][j];

  vector<vector<int>> a(n+2, vector<int>(n+2, 0)), b(n+2, vector<int>(n+2, 0));
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    a[i][j] = v[i][j] + a[i-1][j-1];
    b[i][j] = v[i][j] + b[i-1][j+1];
  }

  int ans = -2e9;
  for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) for (int k=1; k<=i && k<=j; k++) {
    ans = max(ans, a[i][j] - a[i-k][j-k] - b[i][j-k+1] + b[i-k][j+1]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}