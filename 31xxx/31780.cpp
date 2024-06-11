#include <iostream>
using namespace std;

void solve(void) {
  int x, m; cin >> x >> m;

  cout << x * (m + 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}