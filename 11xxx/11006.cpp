#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << 2*m-n << " " << n-m << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}