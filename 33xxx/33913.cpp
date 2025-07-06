#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> dp1(n+1, 1), dp2(n+1, 0);

  for (int i=1; i<=n; i++) {
    dp1[i] = (24 * dp1[i-1] + 2 * dp2[i-1]) % MOD;
    dp2[i] = (24 * dp2[i-1] + 2 * dp1[i-1]) % MOD;
  }
  cout << dp1[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}