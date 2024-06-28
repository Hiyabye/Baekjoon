#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> t(n);
  for (int i=0; i<n; i++) cin >> t[i];
  for (int i=1; i<n; i++) t[i] += t[i-1];

  long long ans = t[m-1];
  for (int i=m; i<n; i++) ans = max(ans, t[i]-t[i-m]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}