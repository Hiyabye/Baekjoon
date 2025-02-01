#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<double> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  long long ans = 0;
  for (int i=1; i<n; i++) {
    auto it = lower_bound(a.begin(), a.begin() + i, a[i] * 0.9);
    ans += max<int>(0, i - distance(a.begin(), it));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}