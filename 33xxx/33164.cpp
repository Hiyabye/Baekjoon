#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    ans += (a[i] + b[j]) * max(a[i], b[j]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}