#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int ans = (n > 1 ? v[1]-v[0] : 0);
  for (int i=2; i<n; i++) {
    ans = gcd(ans, v[i]-v[i-1]);
  }
  if (ans) cout << ans << "\n";
  else cout << "INFINITY\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}