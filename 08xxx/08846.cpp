#include <iostream>
#define MOD 500000009
using namespace std;

void solve(void) {
  int a; cin >> a;

  long long ans = 0, cur = 1;
  while (a--) {
    ans = (ans + cur) % MOD;
    cur = (cur << 2) % MOD;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}