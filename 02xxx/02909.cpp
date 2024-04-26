#include <iostream>
using namespace std;

inline int ten(int n) {
  int r = 1;
  while (n--) r *= 10;
  return r;
}

void solve(void) {
  int c, k; cin >> c >> k;

  cout << (c + ten(k) / 2) / ten(k) * ten(k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}