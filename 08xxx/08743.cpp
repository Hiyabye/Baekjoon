#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  cout << min(n, k-1) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}