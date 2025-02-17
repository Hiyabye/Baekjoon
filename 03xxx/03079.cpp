#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  long long lo = 0, hi = 1e18;
  while (lo < hi) {
    long long mid = (lo + hi) / 2;
    long long cnt = 0;
    for (int i=0; i<n; i++) {
      cnt += mid / t[i];
      if (cnt >= m) break;
    }
    if (cnt >= m) hi = mid;
    else lo = mid + 1;
  }
  cout << lo;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}