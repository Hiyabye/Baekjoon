#include <iostream>
using namespace std;

void solve(void) {
  int m; cin >> m;

  cout << (m < 30 ? m / 2 : 15 + (m - 30) * 3 / 2) << "." << (m & 1) * 5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}