#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  if (n == 1) {
    cout << 1;
  } else if (k != 2) {
    cout << -1;
  } else {
    for (int i=2; i<=n; i++) cout << i << " ";
    cout << 1;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}