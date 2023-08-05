#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> m;

  int lo = 1, hi = *max_element(a.begin(), a.end());
  while (lo <= hi) {
    int mid = (lo+hi)/2, sum = 0;
    for (int i=0; i<n; i++) {
      sum += min(a[i], mid);
    }
    if (sum <= m) lo = mid+1;
    else hi = mid-1;
  }
  cout << hi;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}