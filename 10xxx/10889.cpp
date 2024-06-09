#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  cout << 111 * x * x + 11 * x + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}