#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> m(n);
  for (int i=0; i<n; i++) cin >> m[i];

  vector<long long> d(n, m[0]);
  for (int i=1; i<n; i++) {
    d[i] = d[i-1] + (i & 1 ? 1 : -1) * (m[i-1] - m[i]);
  }

  long long l = d[1], r = d[0];
  for (int i=2; i<n; i++) {
    if (i & 1) {
      l = max(l, d[i]);
    } else {
      r = min(r, d[i]);
    }
  }
  cout << max(0LL, r-l+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}