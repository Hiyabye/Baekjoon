#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=0; n; i++) {
    if (n & 1) cout << i << " ";
    n >>= 1;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}