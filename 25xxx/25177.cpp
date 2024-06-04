#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=n; i<m; i++) a.push_back(0);
  for (int i=0; i<m; i++) cin >> b[i];
  for (int i=m; i<n; i++) b.push_back(0);

  int ans = 0;
  for (int i=0; i<n || i<m; i++) {
    ans = max(ans, b[i] - a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}