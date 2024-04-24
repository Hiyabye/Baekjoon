#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long ans = 0, cur = 1;
  while (n) {
    if (n & 1) ans += cur;
    cur *= 3;
    n >>= 1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}