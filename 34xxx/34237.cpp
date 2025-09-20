#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  while (m--) {
    int g, x, y; cin >> g >> x >> y;
    int ans = 0;
    for (int i=0; i<n; i++) {
      if (x <= a[i] && y <= b[i] && a[i] + b[i] <= g) ans++;
    }
    cout << ans << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}