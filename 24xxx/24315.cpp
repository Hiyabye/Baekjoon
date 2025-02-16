#include <iostream>
using namespace std;

bool solve(void) {
  int a1, a0; cin >> a1 >> a0;
  int c1, c2; cin >> c1 >> c2;
  int n0; cin >> n0;

  return c1 <= a1 && a1 <= c2 && c1*n0 <= a1*n0+a0 && a1*n0+a0 <= c2*n0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}