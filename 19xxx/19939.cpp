#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  n -= k * (k + 1) / 2;
  cout << (n < 0 ? -1 : k - (n % k == 0));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}