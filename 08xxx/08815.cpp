#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << "ABCBCDCDADAB"[(n-1) % 12] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}