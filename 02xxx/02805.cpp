#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  long long n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long l = 0, r = *max_element(a.begin(), a.end());
  while (l+1 < r) {
    long long mid = (l+r)/2, sum = 0;
    for (int i=0; i<n; i++) {
      if (a[i] > mid) sum += a[i] - mid;
    }
    if (sum >= m) l = mid;
    else r = mid;
  }
  cout << l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}