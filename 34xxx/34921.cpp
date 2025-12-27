#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, t; cin >> a >> t;

  cout << max(0, 10 + 2 * (25 - a + t));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}