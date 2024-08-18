#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long cur = 0;
  for (int i=0; i<k; i++) {
    cur += a[i];
  }

  long long ans = cur;
  for (int i=k; i<n; i++) {
    cur += a[i] - a[i-k];
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}