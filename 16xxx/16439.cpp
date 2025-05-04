#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  int ans = 0;
  for (int i=0; i<m-2; i++) for (int j=i+1; j<m-1; j++) for (int k=j+1; k<m; k++) {
    int sum = 0;
    for (int l=0; l<n; l++) {
      sum += max({a[l][i], a[l][j], a[l][k]});
    }
    ans = max(ans, sum);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}