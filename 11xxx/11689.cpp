#include <iostream>
using namespace std;

void solve(void) {
  long long n;
  cin >> n;

  long long ans = n;
  for (long long i=2; i*i<=n; i++) {
    if (n % i) continue;
    ans -= ans / i;
    while (n % i == 0) n /= i;
  }
  if (n > 1) ans -= ans / n;

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}