#include <iostream>
#define MOD 1000000007
using namespace std;

long long phi(int n) {
  long long ret = n;
  for (int i=2; i*i<=n; i++) {
    if (n % i) continue;
    ret -= ret / i;
    while (n % i == 0) n /= i;
  }
  if (n > 1) ret -= ret / n;
  return ret;
}

void solve(void) {
  int n; cin >> n;

  long long ans = 1;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    ans = (ans * phi(x)) % MOD;
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