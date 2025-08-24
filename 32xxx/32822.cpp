#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  vector<int> v(n, -1e9);
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    int x; cin >> x;
    v[j] = max(v[j], abs(a[i][j]-x));
  }

  int ans = 0;
  while (m--) {
    int x; cin >> x; x--;
    ans += v[x];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}