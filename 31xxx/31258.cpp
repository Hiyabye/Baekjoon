#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<n && i<m; i++) ans += a[i] * b[i];
  cout << min(n, m) << " " << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}