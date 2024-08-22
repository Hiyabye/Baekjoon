#include <iostream>
#define MOD 998244353
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;

  long long ans = r;
  for (int i=1; i<c; i++) {
    ans = (ans * (r-1)) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}