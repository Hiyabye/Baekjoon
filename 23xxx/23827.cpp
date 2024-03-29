#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n+1, 0);
  for (int i=1; i<=n; i++) cin >> a[i];

  long long ans = 0;
  for (int i=1; i<=n; i++) {
    ans = (ans + a[i] * a[i-1]) % MOD;
    a[i] = (a[i] + a[i-1]) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}