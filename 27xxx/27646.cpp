#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << n - 1 << "\n";
  for (int i=1; i<n; i++) cout << "0 " << i << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}