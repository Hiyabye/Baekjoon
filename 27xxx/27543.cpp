#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];

  for (int i=0; i<m; i++) {
    int lo = 0, hi = n-1;
    while (lo <= hi) {
      int mid = lo+(hi-lo)/2;
      if (a[mid] <= b[i]) lo = mid+1;
      else hi = mid-1;
    }

    int ret = 0;
    if (hi >= 0) ret = max(ret, k-abs(b[i]-a[hi]));
    if (hi < n-1) ret = max(ret, k-abs(b[i]-a[hi+1]));
    cout << ret << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}