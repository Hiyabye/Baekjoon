#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long long solve(void) {
  long long n, p, v; cin >> n >> p >> v;
  if (n == 1) return 0;

  long long ans = 9e18;
  for (int i=1; (1LL<<i)<=n; i++) {
    long long t = pow(n, 1.0 / i), d = 0;
    while (pow(t + 1, d) * pow(t, i - d) < n) d++;
    ans = min(ans, (t * i + d) * p + v * i);
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}