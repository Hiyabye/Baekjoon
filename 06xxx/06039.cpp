#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int f, m, n; cin >> f >> m >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i];

  int ans = 0; double mx = (double)f / m;
  for (int mask=0; mask<(1<<n); mask++) {
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) f += a[i], m += b[i];
    }
    if ((double)f / m > mx) {
      ans = mask;
      mx = (double)f / m;
    }
    for (int i=0; i<n; i++) {
      if (mask & (1 << i)) f -= a[i], m -= b[i];
    }
  }

  for (int i=0; i<n; i++) {
    if (ans & (1 << i)) cout << i+1 << "\n";
  }
  if (ans == 0) cout << "NONE";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}