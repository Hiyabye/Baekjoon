#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long f; cin >> f;

  long long ans = (2 * M_PI * sqrt(f / M_PI) + 0.099) * 10;
  cout << ans / 10 << '.' << ans % 10;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}