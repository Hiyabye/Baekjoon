#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> a[i][j];

  vector<vector<int>> b = a;
  for (int k=0; k<n; k++) for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    if (i == j || j == k || k == i) continue;
    if (a[i][j] > a[i][k] + a[k][j]) { cout << -1; return; }
    if (a[i][j] == a[i][k] + a[k][j]) b[i][j] = 0;
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    ans += b[i][j];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}