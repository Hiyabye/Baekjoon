#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  cout << (min(n, m) - 1) * 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  while (k--) solve();
  return 0;
}