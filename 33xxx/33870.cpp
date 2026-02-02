#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> c(n, 0), d(n, 0);
  vector<bool> e(n, false);

  for (int i=1; i<=m; i++) {
    int b; cin >> b; b--;
    if (a[b] + c[b] < i) e[b] = true;
    d[b] = (c[b] == i-1) ? d[b] + 1 : 1;
    if (e[b] && d[b] >= 2) e[b] = false;
    c[b] = i;
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (e[i] || a[i] + c[i] < m+1) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}