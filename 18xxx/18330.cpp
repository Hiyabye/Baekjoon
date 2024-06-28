#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  cout << 1500 * min(n, k+60) + 3000 * max(0, n-k-60);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}