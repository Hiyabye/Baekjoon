#include <iostream>
using namespace std;

void solve(void) {
  int n, a, d; cin >> n >> a >> d;

  cout << n * (2 * a + (n - 1) * d) / 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}