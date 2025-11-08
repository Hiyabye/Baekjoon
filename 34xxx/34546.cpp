#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int mn = a[0];
  for (int i=1; i<n; i++) mn = min(mn, a[i]);

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += a[i] - mn;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}