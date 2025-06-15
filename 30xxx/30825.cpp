#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; long long k; cin >> n >> k;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long a0 = a[0];
  for (int i=1; i<n; i++) {
    a0 = max(a0, a[i] - k * i);
  }

  long long ans = 0;
  for (int i=0; i<n; i++) {
    ans += a0 + k * i - a[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}