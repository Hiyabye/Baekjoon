#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int h, x; cin >> h >> x;
  vector<long long> c(h+1, 0);
  for (int i=1; i<=h; i++) cin >> c[i];

  vector<long long> a(h+1, 1);
  for (int i=1; i<=h; i++) {
    a[i] = (a[i-1] * x) % MOD;
  }

  long long ans = 0;
  for (int i=1; i<=h; i++) {
    ans = (ans + (c[i] * a[i]) % MOD) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}