#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n+1, 0), b(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];
  for (int i=1; i<=n; i++) cin >> b[i];

  for (int i=1; i<=n; i++) a[i] += a[i-1];
  for (int i=1; i<=n; i++) b[i] += b[i-1];

  int ans = -2e9, mxa = -2e9;
  for (int j=k+1; j<=n; j++) {
    int i = j - 1;
    mxa = max(mxa, a[i] - a[i-k]);
    ans = max(ans, mxa + b[j] - b[j-k]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}