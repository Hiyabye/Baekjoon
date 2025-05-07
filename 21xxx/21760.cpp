#include <iostream>
using namespace std;

void solve(void) {
  int n, m, k, d; cin >> n >> m >> k >> d;

  int cnt = m * n * (k * (m - 1) + m * (n - 1)) / 2;
  int ans = d / cnt;

  cout << (ans ? ans * cnt : -1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}