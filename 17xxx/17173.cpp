#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> k(m);
  for (int i=0; i<m; i++) cin >> k[i];

  vector<bool> ok(n+1, false);
  for (int i=0; i<m; i++) {
    for (int j=k[i]; j<=n; j+=k[i]) ok[j] = true;
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (ok[i]) ans += i;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}