#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;

  for (int i=2; i*i<=n; i++) {
    if (!(n % i)) return n - n / i;
  }
  return n - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}