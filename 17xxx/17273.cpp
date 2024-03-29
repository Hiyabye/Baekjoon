#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  int a, b; cin >> a >> b;

  bool ans = true;
  while (m--) {
    int k; cin >> k;
    ans ^= ((ans && a <= k) || (!ans && b <= k));
  }
  cout << (ans ? a : b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}