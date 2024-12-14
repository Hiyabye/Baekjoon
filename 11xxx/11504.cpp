#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  int x = 0, y = 0;
  for (int i=0; i<m; i++) {
    int d; cin >> d;
    x = 10 * x + d;
  }
  for (int i=0; i<m; i++) {
    int d; cin >> d;
    y = 10 * y + d;
  }

  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  
  int ans = 0;
  for (int i=0; i<n; i++) {
    int z = 0;
    for (int j=0; j<m; j++) z = 10 * z + v[(i+j) % n];
    if (x <= z && z <= y) ans++;
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