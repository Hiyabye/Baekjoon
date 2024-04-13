#include <iostream>
using namespace std;

bool solve(void) {
  int a1, a0; cin >> a1 >> a0;
  int c; cin >> c;
  int n0; cin >> n0;

  return c <= a1 && c * n0 <= a1 * n0 + a0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}