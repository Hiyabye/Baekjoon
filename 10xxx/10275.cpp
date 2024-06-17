#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, a, b; cin >> n >> a >> b;

  int ans = -1;
  for (int i=0; i<n; i++) {
    if (a & (1LL << i)) ans++;
    if (b & (1LL << i)) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}