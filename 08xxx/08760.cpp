#include <iostream>
using namespace std;

void solve(void) {
  int w, k; cin >> w >> k;

  cout << w * k / 2 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}