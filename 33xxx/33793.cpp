#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  for (int i=0; i<n; i++) {
    cout << k - i % k << " ";
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