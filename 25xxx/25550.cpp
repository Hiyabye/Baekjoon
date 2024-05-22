#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  long long ans = 0;
  for (int i=1; i<n-1; i++) {
    for (int j=1; j<m-1; j++) {
      ans += max(0, min({a[i][j] - 1, a[i-1][j], a[i+1][j], a[i][j-1], a[i][j+1]}));
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