#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long l = 1, r = 1e18, ans = 0;
  while (l <= r) {
    long long m = (l + r) / 2;
    if (m - m / 3 - m / 5 + m / 15 >= n) {
      ans = m;
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}