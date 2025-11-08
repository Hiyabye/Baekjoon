#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (n & 1) cout << 4;
  cout << 2025;
  for (int i=5; i<n; i+=2) cout << "00";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}