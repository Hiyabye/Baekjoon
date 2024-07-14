#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, t; cin >> n >> m >> t;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = max(0, a[0]-m) + max(0, t-a[n-1]-m);
  for (int i=1; i<n; i++) {
    ans += max(0, a[i]-a[i-1]-2*m);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}