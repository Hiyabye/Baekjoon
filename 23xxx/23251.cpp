#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  cout << k * 23 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}