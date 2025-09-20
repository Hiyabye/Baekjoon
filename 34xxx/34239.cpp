#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<long long> b(n); b[0] = a[0];
  for (int i=1; i<n; i++) {
    b[i] = b[i-1] + (i & 1 ? -1 : 1) * a[i];
  }

  vector<long long> c = b, d = b;
  for (int i=n-2; i>=0; i--) {
    c[i] = max(c[i], c[i+1]);
    d[i] = min(d[i], d[i+1]);
  }

  long long ans = c[0];
  for (int i=2; i<n; i+=2) ans = max(ans, c[i] - b[i-1]);
  for (int i=1; i<n; i+=2) ans = max(ans, b[i-1] - d[i]);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}