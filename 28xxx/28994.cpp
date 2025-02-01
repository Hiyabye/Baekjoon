#include <iostream>
using namespace std;
using int128 = __int128;

void solve(void) {
  long long l; cin >> l;

  long long lo = 1, hi = 1e18;
  while (lo < hi) {
    long long mid = (lo + hi) / 2;
    if ((int128)mid * (mid + 1) <= 2 * l) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }
  cout << lo - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}