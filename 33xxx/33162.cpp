#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  cout << x / 2 + (x & 1 ? 3 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}