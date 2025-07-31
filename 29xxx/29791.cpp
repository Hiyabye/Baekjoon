#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans = 1, cur = a[0];
  for (int i=1; i<n; i++) {
    if (a[i] - cur < 100) continue;
    ans++; cur = a[i];
  }
  cout << ans << " ";

  ans = 1, cur = b[0];
  for (int i=1; i<m; i++) {
    if (b[i] - cur < 360) continue;
    ans++; cur = b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}