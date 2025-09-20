#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  while (k--) {
    int x; cin >> x;
    cout << (n + 1 < 2 * x ? n : 1) << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}