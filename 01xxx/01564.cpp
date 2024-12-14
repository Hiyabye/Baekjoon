#include <iomanip>
#include <iostream>
#define MOD 1000000000000
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = 1;
  for (long long i=1; i<=n; i++) {
    ans *= i;
    while (ans % 10 == 0) ans /= 10;
    ans %= MOD;
  }
  cout << setw(5) << setfill('0') << ans % 100000;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}