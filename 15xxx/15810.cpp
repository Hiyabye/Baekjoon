#include <iostream>
#include <vector>
using namespace std;

inline long long calc(int n, const vector<int> &a, long long t) {
  long long ret = 0;
  for (int i=0; i<n; i++) {
    ret += t / a[i];
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long lo = 0, hi = 1e18;
  while (lo < hi) {
    long long mid = lo + (hi - lo) / 2;
    if (calc(n, a, mid) < m) lo = mid + 1;
    else hi = mid;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}