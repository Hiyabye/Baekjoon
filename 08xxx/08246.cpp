#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b, k; cin >> a >> b >> k;

  cout << (a/k) * (b/k) - max(a/k-2, 0) * max(b/k-2, 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}