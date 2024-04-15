#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int l1, r1, l2, r2, k; cin >> l1 >> r1 >> l2 >> r2 >> k;

  int a = max(l1, l2), b = min(r1, r2);
  cout << max(0, b - a + (a > k || b < k));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}