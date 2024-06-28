#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<string> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if ((a[i][j] == 'B' && b[i][j] == 'B') || (a[i][j] == 'W' && b[i][j] == 'W')) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}