#include <iostream>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;

  while (n--) {
    int x; cin >> x;
    while (!(x & 1)) x >>= 1, k--;
  }
  return k <= 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}