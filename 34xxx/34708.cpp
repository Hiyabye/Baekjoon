#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  if (n == 1) {
    if (k == 1) cout << -1;
    else if (k == 2) cout << 1;
    else cout << 2; // k == 3
  } else if (k < 2 * n) {
    cout << -1;
  } else if (k == 2 * n) {
    cout << 2 * n - 1;
  } else {
    cout << 2 * n;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}