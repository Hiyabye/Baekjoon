#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int m; cin >> m;

  cout << min(n, m) * 2 + ((n & 1) ^ (m & 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}