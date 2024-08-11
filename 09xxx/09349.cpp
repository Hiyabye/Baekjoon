#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  cout << (n - k) / (k - 1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}