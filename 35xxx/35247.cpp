#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  int b = 1;
  while (n >>= 1) b++;

  int ans = 1;
  while (ans < b) ans <<= 1;
  cout << ans << " bit" << (ans == 1 ? "" : "s");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}