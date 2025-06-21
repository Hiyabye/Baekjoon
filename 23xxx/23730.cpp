#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n+1, 0), b(m+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=m; i++) cin >> b[i];

  vector<int> ans(n+2, 0);
  for (int i=1; i<=m; i++) {
    ans[b[i]] = a[b[i]];
  }

  for (int i=1; i<=n; i++) {
    if (ans[i]) continue;
    ans[i] = 1;
    while (ans[i] == ans[i-1] || ans[i] == ans[i+1] || ans[i] == a[i]) ans[i]++;
  }

  for (int i=1; i<=n; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}