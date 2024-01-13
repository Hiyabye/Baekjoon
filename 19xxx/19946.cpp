#include <iostream>
using namespace std;

void solve(void) {
  unsigned long long n; cin >> n;

  int ans = 64;
  while (!(n & 1)) {
    n >>= 1;
    ans--;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}