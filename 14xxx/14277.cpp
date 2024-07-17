#include <algorithm>
#include <iostream>
using namespace std;

long long solve(void) {
  long long a, b, c, d, u; cin >> a >> b >> c >> d >> u;

  long long ans = max(0LL, u - a + b) / b;
  if (d == 1 && c <= u) {
    if (a > c || (c - a) % b) ans++;
    return ans;
  }

  for (long long i=c; i<=u; i*=d) {
    if (a > i || (i - a) % b) ans++;
  }
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}