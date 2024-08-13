#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(int n, const vector<long long> &x, long long t) {
  long long ret = 0;
  for (int i=0; i<n; i++) {
    ret += max(0LL, t - x[i]);
  }
  return ret;
}

void solve(void) {
  long long n, k; cin >> n >> k;
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  long long lo = 1, hi = 1e12, ans;
  while (lo < hi) {
    long long mid = lo + (hi - lo) / 2;
    if (calc(n, x, mid) <= k) lo = mid + 1, ans = mid;
    else hi = mid;
  }

  while (calc(n, x, ans) < k) ans++;
  while (calc(n, x, ans) > k) ans--;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}