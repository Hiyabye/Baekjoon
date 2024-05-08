#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int m, n; cin >> m >> n;

  cout << 2 * min(m-1, n-1) + (m > n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}