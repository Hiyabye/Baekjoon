#include <iostream>
#include <vector>
using namespace std;

inline int calc(double x, double k) {
  return x * k + 1e-9;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  long long ans = 0;
  for (int i=0; i<n; i++) {
    double k; cin >> k;
    if (k > 1) a[i] = calc(a[i], k);
    else       b[i] = calc(b[i], k);
    ans += a[i] - b[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}